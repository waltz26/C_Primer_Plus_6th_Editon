#include<stdio.h>
int main(void)
{
    float quart;

    printf("Enter the number of quarts(water): ");
    scanf("%f",&quart);
    printf("The number of water molecules is %e.",950*quart*1e23/3);
    
    return 0;
}