#include<stdio.h>
int main(void)
{
    int count;
    int sum,border;

    scanf("%d",&border);
    count=0;
    sum=0;
    while (count++<border)
        sum=sum+count;
    printf("sum = %d\n",sum);

    return 0;
}