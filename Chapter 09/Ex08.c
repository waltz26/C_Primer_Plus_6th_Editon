#include<stdio.h>
double power(double x,int y);

int main(void)
{
    double a;
    int b;

    scanf("%lf%d",&a,&b);
    printf("%g",power(a,b));

    return 0;
}
double power(double x,int y)
{
    double ans=1;

    if (y>0)
    {
        for (int i=1;i<=y;i++)
            ans*=x;
    }
    else if (y<0)
    {
        for (int i=1;i<=-y;i++)
            ans/=x;
    }
    else
    {
        if (x==0)
            printf("Warning:0 to the 0th power is undefined.\n");
        ans=1;
    }
    
    return ans;
}