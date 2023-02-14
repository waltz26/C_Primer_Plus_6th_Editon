#include<stdio.h>
#define HMEAN(X,Y) (2/(1/(X)+1/(Y)))

int main(void)
{
    double a=0.1,b=0.5;

    printf("HMEAN(%.2f,%.2f) = %.4f\n",a,b,HMEAN(a,b));

    return 0;
}