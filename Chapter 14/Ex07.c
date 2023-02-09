#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 10

struct book
{
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};

char *s_gets(char *s,int n);

int main(void)
{
    FILE *pbooks;
    struct book library[MAXBKS];
    char title[MAXTITL];
    char choice;
    int status[MAXBKS]={0};    //状态，表示该项是否在
    int index;
    int count=0;
    int size=sizeof(struct book);

    if ((pbooks=fopen("book.dat","r+b"))==NULL)
    {
        fputs("Can't open book.dat file\n",stderr);
        exit(1);
    }
    while (count<MAXBKS&&fread(&library[count],size,
        1,pbooks)==1)
    {
        if (count==0)
            puts("Current contents of book.dat:");
        printf("%s by %s: $%.2f\n",library[count].title,
            library[count].author,library[count].value);
        status[count++]=1;
    }
    if (count==MAXBKS)
    {
        fputs("The book.dat file is full.",stderr);
        exit(2);
    }
    fclose(pbooks);

    while (1)
    {
        printf("----------------------\n");
        printf("(a) add some new books\n");
        printf("(d) delete some books\n");
        printf("(c) change some books\n");
        printf("(q) quit\n");
        printf("----------------------\n");
        printf("Please choose an option: ");

        choice=getchar();
        while (getchar()!='\n')    //去除多余字符
            continue;
        if (choice=='a')
        {
            puts("Please add new book titles.");
            puts("Press [enter] at the start of a line to stop.");
            while (count<MAXBKS&&s_gets(title,MAXTITL-1)!=NULL
                &&title[0]!='\0')
            {
                for (index=0;index<MAXBKS;index++)
                    if (!status[index])
                    {
                        strcpy(library[index].title,title);
                        puts("Now enter the author.");
                        s_gets(library[index].author,MAXAUTL-1);
                        puts("Now enter the value.");
                        scanf("%f",&library[index].value);
                        status[index]=1;
                        count++;
                        break;
                    }
                while (getchar()!='\n')
                    continue;
                if (count<MAXBKS)
                    puts("Enter the next title.");
            }
        }
        else if (choice=='d')
        {
            puts("Please enter book titles.");
            puts("Press [enter] at the start of a line to stop.");
            while (count>0&&s_gets(title,MAXTITL-1)!=NULL
                &&title[0]!='\0')
            {
                for (index=0;index<MAXBKS;index++)
                    if (status[index]&&!strcmp(title,library[index].title))
                    {
                        status[index]=0;
                        count--;
                        break;
                    }
                if (index==MAXBKS)
                    puts("There is no such book.");
                if (count>0)
                    puts("Enter the next title.");
            }
        }
        else if (choice=='c')
        {
            puts("Please enter book titles.");
            puts("Press [enter] at the start of a line to stop.");
            while (s_gets(title,MAXTITL-1)!=NULL&&title[0]!='\0')
            {
                for (index=0;index<MAXBKS;index++)
                    if (status[index]&&!strcmp(title,library[index].title))
                    {
                        puts("Please enter the new title.");
                        s_gets(library[index].title,MAXTITL-1);
                        puts("Now enter the new author.");
                        s_gets(library[index].author,MAXAUTL-1);
                        puts("Now enter the new value.");
                        scanf("%f",&library[index].value);
                        break;
                    }
                puts("Enter the next title.");
            }
        }
        else if (choice=='q')
            break;
        else
        {
            puts("Wrong choice.\n");
            continue;
        }
    }

    if ((pbooks=fopen("book.dat","w+b"))==NULL)
    {
        fputs("Can't open book.dat file\n",stderr);
        exit(1);
    }

    puts("");
    if (count>0)
    {
        puts("Here is the list of your books:");
        for (index=0;index<MAXBKS;index++)
            if (status[index])
            {
                printf("%s by %s: $%.2f\n",library[index].title,
                library[index].author,library[index].value);
                fwrite(&library[index],size,1,pbooks);
            }
    }
    else
        puts("No books? Too bad.\n");
    puts("Bye.\n");
    fclose(pbooks);

    return 0;
}
char *s_gets(char *s,int n)
{
    char *p,*find;

    p=fgets(s,n,stdin);
    if (p)
    {
        find=strchr(s,'\n');
        if (find)
            *find='\0';
        else
            while (getchar()!='\n')
                continue;
    }

    return p;
}