#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define LEN 40

char *s_gets(char *s,int n);

int main(void)
{
    FILE *in,*out;
    char inname[LEN],outname[LEN];
    char ch;
    int count=0;

    printf("Enter input file name: ");
    s_gets(inname,LEN-1);
    if ((in=fopen(inname,"r"))==NULL)
    {
        fprintf(stderr,"I couldn't open the file \"%s\"\n",
            inname);
        exit(EXIT_FAILURE);
    }
    strncpy(outname,inname,LEN-5);
    outname[LEN-5]='\0';
    strcat(outname,".red");
    if ((out=fopen(outname,"w"))==NULL)
    {
        fprintf(stderr,"I couldn't open the file \"%s\"\n",
            inname);
        exit(3);
    }
    while ((ch=getc(in))!=EOF)
        if (count++%3==0)
            putc(ch,out);
    if (fclose(in)!=0||fclose(out)!=0)
        fprintf(stderr,"Error in closing files\n");

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