#include<stdio.h>
int main(void)
{
    char ch;
    int count=0;

    while ((ch=getchar())!='#')
    {
        count++;
        printf("%c-%d",ch,ch);

        if (count%8)
            putchar(' ');
        else putchar('\n');
    }

    putchar('\n');
    printf("Done!\n");

    return 0;
}