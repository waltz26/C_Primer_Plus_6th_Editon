#include<stdio.h>
void replace(double *x,double *y);

int main(void)
{
    double a,b;
    
    scanf("%lf%lf",&a,&b);
    replace(&a,&b);
    printf("%g %g\n",a,b);

    return 0;
}
void replace(double *x,double *y)
{
    double temp;
    
    temp=(*x)>(*y)?*x:*y;
    *x=temp;
    *y=temp;

    return;
}