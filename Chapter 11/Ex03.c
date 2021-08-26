#include<stdio.h>
#include<ctype.h>
#define SIZE 256

void get_word(char *s);

int main(void)
{
    char word[SIZE];

    printf("Enter a line of characters (no more than 255 characters):\n");
    get_word(word);
    printf("The content of 'word':%s\n",word);

    return 0;
}
void get_word(char *s)
{
    char ch;
    int count=0;

    while (isspace(ch=getchar()))
        ;
    do
    {
        s[count++]=ch;
    } while (!isspace(ch=getchar()));
    s[count]='\0';
}