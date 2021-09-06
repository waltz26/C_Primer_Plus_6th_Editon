#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
    FILE *fp;
    char ch;
    int i;

    for (i=1;i<argc;i++)
    {
        printf("The contents of the file '%s':\n",argv[i]);
        if ((fp=fopen(argv[i],"r"))==NULL)
        {
            printf("Can't open %s\n",argv[i]);
            exit(EXIT_FAILURE);
        }
        while ((ch=getc(fp))!=EOF)
            putchar(ch);
        fclose(fp);
    }

    return 0;
}