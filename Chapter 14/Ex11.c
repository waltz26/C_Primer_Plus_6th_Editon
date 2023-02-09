#include<stdio.h>
#include<math.h>
#define SIZE 10

void transform(const double *source,double *target,int num,double (*f)(double));
double calc1(double x);
double calc2(double x);

int main(void)
{
    const double s[SIZE]={0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.0};
    double t[SIZE];

    transform(s,t,SIZE,sin);
    transform(s,t,SIZE,cos);
    transform(s,t,SIZE,calc1);
    transform(s,t,SIZE,calc2);

    return 0;
}
void transform(const double *source,double *target,int num,double (*f)(double))
{
    for (int i=0;i<num;i++)
        target[i]=f(source[i]);

    printf("source:\n");
    for (int i=0;i<num;i++)
        printf("%f ",source[i]);
    putchar('\n');
    printf("target:\n");
    for (int i=0;i<num;i++)
        printf("%f ",target[i]);
    putchar('\n');
}
double calc1(double x)
{
    return x*2;
}
double calc2(double x)
{
    return 1.0/x;
}