#include<stdio.h>
#include<ctype.h>
#define SIZE 256

char *s_gets(char *s,int n);
int atoi(const char *s);

int main(void)
{
    char s[SIZE];

    printf("Enter the string to be converted (no more than 255 characters):\n");
    if (s_gets(s,SIZE-1)==NULL)
    {
        printf("Error!\n");
        return 0;
    }
    printf("Integer after conversion (0 means it cannot be converted):%d\n",atoi(s));

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
int atoi(const char *s)
{
    int ans=0,flag=0;

    if (s==NULL)
        printf("Pointer is NULL!\n");
    while (isspace(*s))
        s++;
    if (*s=='-')
        flag=1;
    if (*s=='+'||*s=='-')
        s++;
    while (isdigit(*s))
        ans=ans*10+(*s++-'0');

    return ans*(flag?-1:1);
}