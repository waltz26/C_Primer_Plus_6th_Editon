#include<stdio.h>
#include<ctype.h>

int main(void)
{
    char ch;
    int count_upper=0,count_lower=0;

    while ((ch=getchar())!=EOF)
    {
        if (isupper(ch))
            count_upper++;
        if (islower(ch))
            count_lower++;
    }

    printf("Number of capital letters:%d.\n",count_upper);
    printf("Number of lowercase letters:%d.\n",count_lower);
    return 0;
}