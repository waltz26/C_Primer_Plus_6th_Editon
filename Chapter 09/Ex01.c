#include<stdio.h>
double min(double x,double y);

int main(void)    //驱动程序
{
    double a,b;
    
    scanf("%lf%lf",&a,&b);
    printf("%g",min(a,b));

    return 0;
}
double min(double x,double y)
{
    return x<y?x:y;
}