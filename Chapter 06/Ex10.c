#include<stdio.h>
int main(void)
{
    int lo_lim,up_lim;
    int sum,i=0;;

    printf("Enter lower and upper integer limits: ");
    scanf("%d%d",&lo_lim,&up_lim);
    while (lo_lim<up_lim)
    {
        for (sum=0,i=lo_lim;i<=up_lim;i++)
            sum+=i*i;
        printf("The sums of the squares from %d to %d is %d\n",
            lo_lim*lo_lim,up_lim*up_lim,sum);
        printf("Enter next set of limits: ");
        scanf("%d%d",&lo_lim,&up_lim);
    }
    printf("Done");

    return 0;
}