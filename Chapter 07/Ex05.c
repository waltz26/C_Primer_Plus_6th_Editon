#include<stdio.h>
int main(void)
{
    char ch;
    int count_replace=0;

    while ((ch=getchar())!='#')
    {
        switch (ch)
        {
            case '.':
                count_replace++;
                ch='!';
            case '!':
                count_replace++;
            default:
                break;
        }
    }

    printf("A total of %d replacement(s).\n",count_replace);
    printf("Done!\n");

    return 0;
}