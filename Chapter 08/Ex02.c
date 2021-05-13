#include<stdio.h>
int main(void)
{
    char ch;
    int count=0;

    while ((ch=getchar())!=EOF)    //这里的char为signed char
    {
        if (ch=='\n')
        {
            printf("\\n %d\n",(int)ch);
            count=0;
            continue;
        }
        else if (ch=='\t')
            printf("\\t ");
        else if (ch<' ')
            printf("^%c ",ch+64);
        else if (ch==127)    //删除字符
            printf("^? ");
        else
            printf("%c ",ch);

        printf("%d",(int)ch);

        if (++count==10)
        {
            printf("\n");
            count=0;
        }
        else printf(" ");
    }

    printf("Done!\n");
    return 0;
}
