#include<stdio.h>
double harmonic_mean(double x,double y);

int main(void)
{
    double a,b;

    scanf("%lf%lf",&a,&b);
    printf("%g",harmonic_mean(a,b));

    return 0;
}
double harmonic_mean(double x,double y)
{
    return 2.0/(1.0/x+1.0/y);
}