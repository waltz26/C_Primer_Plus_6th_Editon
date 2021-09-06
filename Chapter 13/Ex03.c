#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define SIZE 256

char *s_gets(char *s,int n);

int main(void)
{
    FILE *fp_s,*fp_c;
    char filename_s[SIZE],filename_c[SIZE];
    char ch;

    printf("Enter source file name (no more than 255 characters):\n");
    s_gets(filename_s,SIZE-1);
    printf("Enter output file name (no more than 255 characters):\n");
    s_gets(filename_c,SIZE-1);
    if ((fp_s=fopen(filename_s,"r"))==NULL)
    {
        printf("Can't open %s",filename_s);
        exit(EXIT_FAILURE);
    }
    if ((fp_c=fopen(filename_c,"w"))==NULL)
    {
        printf("Can't open %s",filename_c);
        exit(EXIT_FAILURE);
    }
    while ((ch=getc(fp_s))!=EOF)
    {
        ch=toupper(ch);
        putc(ch,fp_c);
    }
    fclose(fp_s);
    fclose(fp_c);

    return 0;
}
char *s_gets(char *s,int n)
{
    char *p;
    int i=0;

    p=fgets(s,n,stdin);
    if (p)
    {
        while (p[i]!='\n'&&p[i]!='\0')
            i++;
        if (p[i]=='\n')
            p[i]='\0';
        else
            while (getchar()!='\n')
                continue;
    }

    return p;
}