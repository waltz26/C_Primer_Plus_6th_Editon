#include<stdio.h>
#include<string.h>
#define SIZE 256

char *s_gets(char *s,int n);
char *del_space(char *s);

int main(void)
{
    char s[SIZE];

    printf("Enter a string (no more than 255 characters)(enter a blank line to quit):\n");
    while (s_gets(s,SIZE-1))
    {
        if (s[0]=='\0') break;
        printf("Processed string:\n%s\n",del_space(s));
        printf("Enter next string (no more than 255 characters)(enter a blank line to quit):\n");
    }
    printf("Done!\n");

    return 0;
}
char *s_gets(char *s,int n)
{
    char *p;
    int i=0;

    p=fgets(s,n,stdin);
    if (p)
    {
        while (s[i]!='\n'&&s[i]!='\0')
            i++;
        if (s[i]=='\n')
            s[i]='\0';
        else
            while (getchar()!='\n')
                continue;
    }

    return p;
}
char *del_space(char *s)
{
    int i,j;    //j是偏移量
    int l;

    l=strlen(s);
    for (i=0,j=0;i<l;i++)
    {
        if (s[i]!=' ')
            s[j++]=s[i];
    }
    s[j]='\0';

    return s;
}