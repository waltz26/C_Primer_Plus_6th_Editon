#include<stdio.h>
int main(void)
{
    float f_value;

    printf("Enter a floating-point value: ");
    scanf("%f",&f_value);
    printf("fixed-point notation: %f\n",f_value);
    printf("exponential notation: %e\n",f_value);
    printf("p notation: %a\n",f_value);

    return 0;
}