#include<stdio.h>
int main(void)
{
    float inch;

    printf("Enter your height(inch): ");
    scanf("%f",&inch);
    printf("Your height is %fcm.",2.54*inch);
    
    return 0;
}