#include<stdio.h>

void cube(double num_para);

int main(void)
{
    double num_argue;

    printf("Enter a double-precision floating-point number: ");
    scanf("%lf",&num_argue);
    cube(num_argue);

    return 0;
}
void cube(double num_para)
{
    double num_cube;

    num_cube=num_para*num_para*num_para;
    printf("%f\n",num_cube);
}