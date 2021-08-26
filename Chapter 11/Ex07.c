#include<stdio.h>
#define SIZE 256

char *s_gets(char *s,int n);
char *mystrncpy(char * restrict s1,char *restrict s2,int n);

int main(void)
{
    char s[SIZE],t[SIZE];
    int n;

    printf("Enter a line of characters (no more than 255 characters)(enter a blank line to quit):\n");
    while (s_gets(t,SIZE-1))
    {
        if (t[0]=='\0') break;    //空行退出
        printf("Enter the maximum number of characters to be copied: ");
        scanf("%d%*c",&n);
        printf("The contents of array 's':\n%s\n",mystrncpy(s,t,n));
        printf("Enter next line of characters (no more than 255 characters)(enter a blank line to quit):\n");
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
char *mystrncpy(char * restrict s1,char *restrict s2,int n)
{
    int i=0;

    while (i<n&&s2[i])
    {
        s1[i]=s2[i];
        i++;
    }
    s1[i]='\0';

    return s1;
}