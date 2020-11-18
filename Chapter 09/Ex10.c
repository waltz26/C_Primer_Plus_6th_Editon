#include<stdio.h>
void to_base_n(unsigned long n,int base);

char table[]="0123456789";

int main(void)
{
    unsigned long number;
    unsigned short base;

    printf("Enter an integer and base (q to quit)\n");
    while (scanf("%ld%hd",&number,&base)==2)
    {
        printf("Base n equivalent: ");
        to_base_n(number,base);
        putchar('\n');
        printf("Enter an integer and base (q to quit)\n");
    }
    printf("Done!\n");

    return 0;
}
void to_base_n(unsigned long n,int base)
{
    int r;

    r=n%base;
    if (n>=base)
        to_base_n(n/base,base);
    putchar(table[r]);

    return;
}