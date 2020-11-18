#include<stdio.h>
#include<ctype.h>

int main(void)
{
    char ch=' ';
    int count_word=0,count_charater=0;
    int inword=0;

    do
    {
        if ((ispunct(ch)||isspace(ch))&&inword)
        {
            count_word++;
            inword=0;
        }
        else if (!ispunct(ch)&&!isspace(ch)&&!inword)
            inword=1;
        else ;

        if (inword)
            count_charater++;

    } while ((ch=getchar())!=EOF);


    printf("Average number of letters per word:%.2f.\n",
            1.0*count_charater/count_word);
    return 0;
}