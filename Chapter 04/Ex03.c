#include<stdio.h>
int main(void)
{
    float number;

    printf("Enter a floating-point number: ");
    scanf("%f",&number);
    printf("The input is %.1f or %.1e.\n",number,number);    //a
    printf("The input is %+.3f or %.3E.\n",number,number);    //b
    
    return 0;
}