#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 256

char *s_gets(char *s,int n);

int main(void)
{
    FILE *fa,*fb;
    char a[SIZE],b[SIZE];
    char cha,chb;

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
        while ((cha=getc(fa))!=EOF&&cha!='\n')
            putchar(cha);
        while ((chb=getc(fb))!=EOF&&chb!='\n')
            putchar(chb);
        if (cha!=EOF||chb!=EOF)
            putchar('\n');
    } while(cha!=EOF||chb!=EOF);

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