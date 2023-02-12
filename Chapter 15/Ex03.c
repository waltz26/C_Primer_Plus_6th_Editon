#include<stdio.h>
int openbits(int n);

int main(void)
{
    printf("%d\n",openbits(15));

    return 0;
}
int openbits(int n)
{
    int cnt=0;

    while (n)
    {
        if (n&1)
            cnt++;
        n>>=1;
    }

    return cnt;
}