#include<stdio.h>
void replace(double *x,double *y,double *z);

int main(void)
{
    double a,b,c;
    
    scanf("%lf%lf%lf",&a,&b,&c);
    replace(&a,&b,&c);
    printf("%g %g %g",a,b,c);

    return 0;
}
void replace(double *x,double *y,double *z)
{
    double temp;

    if (*x>*y)
    {
        temp=*y;
        *y=*x;
        *x=temp;
    }
    if (*x>*z)
    {
        temp=*z;
        *z=*x;
        *x=temp;
    }
    if (*y>*z)
    {
        temp=*z;
        *z=*y;
        *y=temp;
    }

    return;
}