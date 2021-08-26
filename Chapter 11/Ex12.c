#include<stdio.h>
#include<ctype.h>
int main(void)
{
    char ch;
    int count_word,count_upper,count_lower,count_punct,count_digit;
    int inword=0;

    count_word=count_upper=count_lower=count_punct=count_digit=0;
    printf("Enter your content:\n");
    while ((ch=getchar())!=EOF)
    {
        if (isupper(ch)) count_upper++;
        else count_lower++;
        if (ispunct(ch)) count_punct++;
        if (isdigit(ch)) count_digit++;

        if (inword&&isspace(ch))
            {inword=0; count_word++;}
        else if (!inword&&!isspace(ch))
            inword=1;
        else continue;
    }
    printf("Statistics:\n");
    printf("Word:%d\nUppercase letter:%d\nLowercase letter:%d\n"
            "Punctuation:%d\nNumeric character:%d\n",
            count_word,count_upper,count_lower,count_punct,count_digit);

    return 0;
}