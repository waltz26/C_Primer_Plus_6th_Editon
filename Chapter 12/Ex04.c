#include<stdio.h>
int calltimes(void);

int main(void)
{
    int i,n;

    printf("Enter the number of times you want to call the function: ");
    scanf("%d",&n);
    for (i=0;i<n;i++)
        printf("loop %d: This function call %d time(s).\n",i+1,calltimes());

    return 0;
}
int calltimes(void)
{
    static int time=0;

    time++;

    return time;
}