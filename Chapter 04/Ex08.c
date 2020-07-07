#include<stdio.h>

#define CONVERT 100.0*3.785/1.609    //转换系数

int main(void)
{
    float mileage,gasoline;

    printf("Enter the mileage (miles) and the amount of gasoline consumed (gallons):\n");
    scanf("%f%f",&mileage,&gasoline);
    printf("Fuel consumption is %.1f mpg,\n",mileage/gasoline);
    printf("or %.1f liter per 100 kilometers.\n",CONVERT*mileage/gasoline);
    printf("The conversion factor is %.1f.\n",CONVERT);

    return 0;
}