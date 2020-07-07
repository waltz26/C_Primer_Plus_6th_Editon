#include<stdio.h>
int main(void)
{
    int sum=100;
    int i=0;

    while (sum>0)
    {
        sum+=sum*0.08-10;
        i++;
    }
    printf("It takes %d years.\n",i);

    return 0;
}