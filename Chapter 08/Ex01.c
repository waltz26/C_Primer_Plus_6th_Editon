#include<stdio.h>

int main(void)
{
    int count=0;

    while (getchar()!=EOF)
        count++;

    printf("The total number of characters is %d.\n",count);
    return 0;
}