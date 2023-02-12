#include<stdio.h>
#define BYTE_BITS 8

unsigned int rotate_l(unsigned int n,unsigned int l);

int main(void)
{
    printf("%d\n",rotate_l(1,34));

    return 0;
}
unsigned int rotate_l(unsigned int n,unsigned int l)
{
    int temp;

    while (l--)
    {
        temp=(n&(1<<(sizeof(unsigned int)*BYTE_BITS-1)))>0;
        n<<=1;
        n|=temp;
    }

    return n;
}