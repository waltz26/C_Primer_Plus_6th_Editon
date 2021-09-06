#include<stdio.h>
#include<stdlib.h>
#define SIZE 256

char *s_gets(char *s,int n);

int main(void)
{
    FILE *fp;
    char filename[SIZE];
    char ch;
    unsigned long count=0;

    printf("Enput file name (no more than 255 characters):\n");
    s_gets(filename,SIZE-1);
    if ((fp=fopen(filename,"r"))==NULL)
    {
        printf("Can't open %s\n",filename);
        exit(EXIT_FAILURE);
    }
    while ((ch=getc(fp))!=EOF)
    {
        putc(ch,stdout);
        count++;
    }
    fclose(fp);
    printf("File %s has %lu chararcters\n",filename,count);

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