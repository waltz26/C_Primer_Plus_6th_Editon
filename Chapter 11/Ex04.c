#include<stdio.h>
#include<ctype.h>
#define SIZE 256

void get_word(char *s,int max);

int main(void)
{
    char word[SIZE];
    int max;

    printf("Enter the maximum number of characters that can be read (no more than 255): ");
    scanf("%d%*c",&max);
    printf("Enter a line of characters (no more than 255 characters):\n");
    get_word(word,max);
    printf("The content of 'word':%s\n",word);

    return 0;
}
void get_word(char *s,int max)
{
    char ch;
    int count=0;

    while (isspace(ch=getchar()))
        ;
    do
    {
        s[count++]=ch;
    } while (!isspace(ch=getchar())&&count<max);
    s[count]='\0';
}