#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 100

struct book
{
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};

char *s_gets(char *s,int n);
void book_sort(struct book *library[],int n,int (*cmp)(const struct book *,const struct book *));
int cmp_title(const struct book *a,const struct book *b);
int cmp_value(const struct book *a,const struct book *b);

int main(void)
{
    struct book *library_copya[MAXBKS],*library_copyb[MAXBKS];
    struct book library[MAXBKS];
    int count=0;
    int index;

    for (index=0;index<MAXBKS;index++)
        library_copya[index]=library_copyb[index]=&library[index];

    printf("Please enter the book title.\n");
    printf("Press [enter] at the start of a line to stop.\n");
    while (count<MAXBKS&&s_gets(library[count].title,MAXTITL-1)!=NULL
        &&library[count].title[0]!='\0')
    {
        printf("Now enter the author.\n");
        s_gets(library[count].author,MAXAUTL-1);
        printf("Now enter the value.\n");
        scanf("%f",&library[count++].value);
        while (getchar()!='\n')
            continue;
        if (count<MAXBKS)
            printf("Enter the next title.\n");
    }
    if (count>0)
    {
        book_sort(library_copya,count,cmp_title);
        book_sort(library_copyb,count,cmp_value);
        printf("Here is the list of your books (Origin):\n");
        for (index=0;index<count;index++)
            printf("%s by %s: $%.2f\n",library[index].title,
                library[index].author,library[index].value);
        printf("Here is the list of your books (Sort by first letter of title):\n");
        for (index=0;index<count;index++)
            printf("%s by %s: $%.2f\n",library_copya[index]->title,
                library_copya[index]->author,library_copya[index]->value);
        printf("Here is the list of your books (Sort by value):\n");
        for (index=0;index<count;index++)
            printf("%s by %s: $%.2f\n",library_copyb[index]->title,
                library_copyb[index]->author,library_copyb[index]->value);
    }
    else
        printf("No books? Too bad.\n");

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
void book_sort(struct book *library[],int n,int (*cmp)(const struct book *,const struct book *))
{
    struct book *tmp;
    int i,j;

    for (i=0;i<n;i++)
        for (j=i+1;j<n;j++)
            if ((*cmp)(library[i],library[j])==1)    //符合交换条件的
            {
                tmp=library[j];
                library[j]=library[i];
                library[i]=tmp;
            }
}
int cmp_title(const struct book *a,const struct book *b)
{
    if (a->title[0]>b->title[0])
        return 1;
    else if (a->title[0]==b->title[0])
        return 0;
    else return -1;
}
int cmp_value(const struct book *a,const struct book *b)
{
    if (a->value<b->value)
        return 1;
    else if (a->value==b->value)
        return 0;
    else return -1;
}