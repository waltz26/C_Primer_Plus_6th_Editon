#include<stdio.h>
int main(void)
{
    char ch;
    int count_replace=0;

    while ((ch=getchar())!='#')
    {
        if (ch=='.')
        {
            count_replace++;    //感叹号替换句号
            ch='!';
        }
        if (ch=='!')
            count_replace++;    //用两个感叹号替换原来的感叹号
    }

    printf("A total of %d replacement(s).\n",count_replace);
    printf("Done!\n");

    return 0;
}