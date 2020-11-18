#include<stdio.h>
int Fibonacci(int n);

int main(void)
{
    int n;

    scanf("%d",&n);
    printf("%d\n",Fibonacci(n));
}
int Fibonacci(int n)
{
    int c1=0,c2=1,c3;

    if (n==1)
        return c2;
    else
    {
        for (int i=2;i<=n;i++)
        {
            c3=c1+c2;
            c1=c2;
            c2=c3;
        }
        return c3;
    }
}