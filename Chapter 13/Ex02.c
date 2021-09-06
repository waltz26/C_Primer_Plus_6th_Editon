#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
    FILE *fp_s,*fp_c;    //一个是源，一个是拷贝
    char ch;

    if (argc!=3)
    {
        printf("usage: %s filename filename\n",argv[0]);
        exit(EXIT_FAILURE);
    }
    if ((fp_s=fopen(argv[1],"rb"))==NULL)
    {
        printf("Can't open %s\n",argv[1]);
        exit(EXIT_FAILURE);
    }
    if ((fp_c=fopen(argv[2],"wb"))==NULL)
    {
        printf("Can't open %s\n",argv[2]);
        exit(EXIT_FAILURE);
    }
    while ((ch=getc(fp_s))!=EOF)
        putc(ch,fp_c);
    fclose(fp_s);
    fclose(fp_c);

    return 0;
}