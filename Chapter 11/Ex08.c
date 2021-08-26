#include<stdio.h>
#include<string.h>
#define SIZE 256

char *s_gets(char *s,int n);
char *string_in(const char *s1,const char *s2);

int main(void)
{
    char s1[SIZE],s2[SIZE];

    printf("Enter a text string and a pattern string in separate lines\n");
    printf("(each no more than 255 characters)(enter one or two blank lines to quit):\n");
    while (s_gets(s1,SIZE-1)&&s_gets(s2,SIZE-1))
    {
        if (s1[0]=='\0'||s2[0]=='\0') break;
        printf("Pattern string find in position:%p; head position:%p.\n",
                string_in(s1,s2),s1);
        printf("Enter next text string and pattern string in separate lines\n");
        printf("(each no more than 255 characters)(enter one or two blank lines to quit):\n");
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
char *string_in(const char *s1,const char *s2)
{
    int i=0,j=0;
    int l1,l2;

    l1=strlen(s1);
    l2=strlen(s2);

    while (i<l1&&j<l2)
    {
        if (s1[i]==s2[j])
            {i++; j++;}
        else
            {i=i-j+1; j=0;}
    }

    if (j==l2) return s1+i-j;
    else return NULL;
}