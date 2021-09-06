#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 256

char *s_gets(char *s,int n);

int main(void)
{
    FILE *fa,*fb;
    char *pa,*pb;
    char a[SIZE],b[SIZE],temp[SIZE];

    printf("Enter two file names in seperate:\n");
    s_gets(a,SIZE-1);
    s_gets(b,SIZE-1);
    if ((fa=fopen(a,"r"))==NULL||(fb=fopen(b,"r"))==NULL)
    {
        printf("Can't open file %s",a);
        exit(EXIT_FAILURE);
    }
    do
    {
        if ((pa=fgets(temp,SIZE-1,fa))!=NULL)
            fputs(temp,stdout);
        if ((pb=fgets(temp,SIZE-1,fb))!=NULL)
            fputs(temp,stdout);
    } while(pa||pb);

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