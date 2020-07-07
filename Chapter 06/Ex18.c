#include<stdio.h>
int main(void)
{
    int sum,week;

    printf("Week Number\n");
    for (week=1,sum=5;sum<=150;week++)
    {
        sum=2*(sum-week);
        printf("%-4d %d\n",week,sum);
    }

    return 0;
}