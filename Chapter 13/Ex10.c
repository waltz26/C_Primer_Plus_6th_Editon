#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 256

char *s_gets(char *s,int n);

int main(void)
{
    FILE *fp;
    char name[SIZE];
    char ch;
    long p;    //fseek第二个参数得是long类型

    printf("Enter a file name:\n");
    s_gets(name,SIZE-1);
    if ((fp=fopen(name,"r"))==NULL)
    {
        fprintf(stderr,"Can't open file %s\n",name);
        exit(EXIT_FAILURE);
    }
    printf("Enter a file content location (<0 or non-digit to quit): ");
    while (scanf("%ld",&p)==1&&p>=0)
    {
        fseek(fp,p,SEEK_SET);
        printf("position %ld:\n",p);
        while ((ch=getc(fp))!='\n'&&ch!=EOF)
            putchar(ch);
        putchar('\n');
        printf("Enter next file content location (<0 or non-digit to quit): ");
    }
    printf("Done!\n");

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