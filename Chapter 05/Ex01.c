#include<stdio.h>
#define M_PER_H 60

int main(void)
{
    int min;
    int hour,left;

    printf("Convert minutes to hours!\n");
    printf("Enter the number of minutes (<=0 to quit):\n");
    scanf("%d",&min);
    while (min>0)
    {
        hour=min/M_PER_H;
        left=min%M_PER_H;
        printf("%d minutes is %d hours, %d minutes.\n",min,
               hour,left);
        printf("Enter next value (<=0 to quit):\n");
        scanf("%d",&min);
    }
    printf("Done!\n");

    return 0;
}