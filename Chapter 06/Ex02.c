#include<stdio.h>
int main(void)
{
    int r,c;    //行和列

    for (r=0;r<5;r++)
    {
        for (c=0;c<=r;c++)
            printf("$");
        printf("\n");
    }

    return 0;
}