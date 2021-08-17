#include<stdio.h>
int main(void)
{
    int count;
    int sum,border;

    printf("Enter a border (<=0 to quit): ");
    scanf("%d",&border);
    while (border>0)
    {
        count=0;
        sum=0;
        while (count++<border)
            sum=sum+count;
        printf("sum = %d\n",sum);
        printf("Enter next border (<=0 to quit): ");
        scanf("%d",&border);
    }
    printf("Done!\n");

    return 0;
}