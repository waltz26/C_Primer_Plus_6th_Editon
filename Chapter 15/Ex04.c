#include<stdio.h>
int test_bit(int n,int pos);

int main(void)
{
    printf("%s\n",(char * [2]){"false","true"}[test_bit(15,4)]);
    printf("%s\n",(char * [2]){"false","true"}[test_bit(15,6)]);

    return 0;
}
int test_bit(int n,int pos)
{
    if (n&(1<<(pos-1)))
        return 1;
    else
        return 0;
}