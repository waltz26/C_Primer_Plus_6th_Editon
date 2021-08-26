#include<stdio.h>
#include<string.h>
#define SIZE 256

char *s_gets(char *s,int n);
char *reverse(char *s);

int main(void)
{
    char s[SIZE];

    printf("Enter a string (no more than 255 characters)(enter a blank lines to quit):\n");
    while (s_gets(s,SIZE-1))
    {
        if (s[0]=='\0') break;
        printf("The reverse order of the string is:\n%s\n",reverse(s));
        printf("Enter next string (no more than 255 characters)(enter a blank lines to quit):\n");
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
char *reverse(char *s)
{
    char temp;
    int i,l;

    l=strlen(s);
    for (i=0;i<l/2;i++)
    {
        temp=s[i];
        s[i]=s[l-i-1];
        s[l-i-1]=temp;
    }

    return s;
}