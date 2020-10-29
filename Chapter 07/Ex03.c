#include<stdio.h>
int main(void)
{
    int input;
    int count_even=0,count_odd=0,sum_even=0,sum_odd=0;
    
    printf("Enter a series of integers(0 to quit):\n");
    while (scanf("%d",&input)==1&&input)
    {
        if (input%2)
        {
            count_odd++;
            sum_odd+=input;
        }
        else 
        {
            count_even++;
            sum_even+=input;
        }
    }

    printf("The number and average of even numbers: %d/%.2f\n",count_even,(float)sum_even/count_even);
    printf("The number and average of odd numbers: %d/%.2f\n",count_odd,(float)sum_odd/count_odd);
    printf("Done!\n");

    return 0;
}