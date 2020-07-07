#include<stdio.h>
int main(void)
{
    int time;
    int i,sym;
    float sum1,sum2;

    printf("Enter a specified number of times(<=0 to quit): ");
    scanf("%d",&time);
    while (time>0)
    {
        for (sum1=sum2=0,i=sym=1;i<=time;i++,sym*=-1)
        {
            sum1+=1.0/i;
            sum2+=sym*1.0/i;
        }

        printf("The sum of sequence 1 is:%f.\n",sum1);
        printf("The sum of sequence 2 is:%f.\n",sum2);
        printf("Enter next value(<=0 to quit): ");
        scanf("%d",&time);
    }
    printf("Done!\n");

    //序列1并不收敛于某值
    //序列2收敛于0.7
    return 0;
}