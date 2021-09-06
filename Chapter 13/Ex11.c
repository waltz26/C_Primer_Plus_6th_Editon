#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 256

int main(int argc,char *argv[])
{
    FILE *fp;
    char *find;
    char s[SIZE];

    if (argc<3)
    {
        fprintf(stderr,"Usage: %s string file_name\n",argv[0]);
        exit(EXIT_FAILURE);
    }
    if ((fp=fopen(argv[2],"r"))==NULL)
    {
        fprintf(stderr,"Can't open file %s",argv[2]);
        exit(EXIT_FAILURE);
    }
    while (fgets(s,SIZE-1,fp)!=NULL)
    {
        find=strstr(s,argv[1]);
        if (find)
            fputs(s,stdout);
    }
    printf("Done!\n");

    return 0;
}