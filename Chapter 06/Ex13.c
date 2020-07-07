#include<stdio.h>
int main(void)
{
    int m[8];
    int i,sum;

    for (i=0,sum=2;i<8;i++,sum*=2)
        m[i]=sum;
    i=0;
    do
    {
        printf("%d ",m[i++]);
    }while (i<8);
    printf("\n");

    return 0;
}