#include<stdio.h>
#define SIZE 256

char *mystrchr(const char *s,int c);

int main(void)
{
    char s[SIZE];
    char ch;

    printf("Enter a string (no more than 255 characters) and a character:\n");
    scanf("%s%*c%c",s,&ch);
    printf("Find in position:%p; head position:%p.\n",mystrchr(s,ch),s);

    return 0;
}
char *mystrchr(const char *s,int c)
{
    while (*s)
    {
        if (*s==c)
            return (char *)s;
        s++;
    }

    return NULL;
}