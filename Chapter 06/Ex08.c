#include<stdio.h>
int main(void)
{
    float n1,n2;

    printf("Enter two floating-point numbers(non-digit to quit):\n");
    while (scanf("%f%f",&n1,&n2)==2)
    {
        printf("The answer is:%f.\n",(n1-n2)/(n1*n2));
        printf("Enter next two values(non-digit to quit):\n");
    }
    printf("Done!\n");

    return 0;
}