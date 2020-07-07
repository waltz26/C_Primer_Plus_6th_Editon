#include<stdio.h>
#include<string.h>
int main(void)
{
    char word[20];
    int i;

    printf("Enter a word: ");
    scanf("%s",word);
    for (i=strlen(word);i>=0;i--)
        printf("%c",word[i]);
    printf("\n");

    return 0;
}