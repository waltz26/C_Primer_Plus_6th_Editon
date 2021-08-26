#include<stdio.h>
#define SIZE 256

int is_within(int c,const char *s);

int main(void)
{
    char s[SIZE];
    char ch;

    printf("Enter a character and a string (no more than 255 characters):\n");
    while (scanf("%c%s",&ch,s)==2)
    {
        if (is_within(ch,s))
            printf("'%c' find in string 's'\n",ch);
        else
            printf("'%c' not find in string 's'\n",ch);
        printf("Enter next character and string (no more than 255 characters):\n");
        getchar();
    }
    printf("Done!\n");

    return 0;
}
int is_within(int c,const char *s)
{
    while (*s)
    {
        if (*s==c)
            return 1;
        s++;
    }

    return 0;
}