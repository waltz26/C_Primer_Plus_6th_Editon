#include<stdio.h>
#include<ctype.h>
void read(void);
int alphabet(char ch);

int main(void)
{
    read();

    return 0;
}
void read(void)
{
    char ch;

    while ((ch=getchar())!=EOF)
    {
        if (isalpha(ch))
            printf("%c is a letter.(position:%d)\n"
                    ,ch,alphabet(ch));
        else if (isspace(ch))
            continue;
        else
            printf("%c is not a letter.\n",ch);
    }
}
int alphabet(char ch)
{
    ch=toupper(ch);
    return ch-'A'+1;
}