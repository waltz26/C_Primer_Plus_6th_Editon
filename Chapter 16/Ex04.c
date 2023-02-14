#include<stdio.h>
#include<time.h>
void delay(double sec);

int main(void)
{
    int i=10;

    while (i--)
    {
        printf("%d\n",i+1);
        delay(1);
    }

    return 0;
}
void delay(double sec)
{
    time_t t1,t2;

    t1=clock();

    while(((t2=clock())-t1)/(double)CLOCKS_PER_SEC<sec)
        continue;
}