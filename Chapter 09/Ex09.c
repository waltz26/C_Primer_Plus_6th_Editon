#include<stdio.h>
double power_p(double x,int y);
double power_n(double x,int y);

int main(void)
{
    double a;
    int b;

    scanf("%lf%d",&a,&b);


    if (b>0)
        printf("%g",power_p(a,b));
    else if (b<0)
        printf("%g",power_n(a,b));
    else
    {
        if (a==0)
            printf("Warning:0 to the 0th power is undefined.\n");
        printf("1\n");
    }

    return 0;
}
double power_p(double x,int y)
{
    if (y==1)
        return x;

    return x*power_p(x,y-1);
}
double power_n(double x,int y)
{
    if (y==-1)
        return 1.0/x;

    return (1.0/x)*power_n(x,y+1);
}