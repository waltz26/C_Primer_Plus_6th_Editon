#include<stdio.h>
#define SIZE 100

unsigned int rand(void);

unsigned int next=1;

int main(void)
{
    int a[SIZE];
    int i,j,temp;

    for (i=0;i<SIZE;i++)
        a[i]=rand();
    for (i=0;i<SIZE;i++)
        for (j=0;j<SIZE;j++)
        {
            temp=a[j];
            a[j]=a[i];
            a[i]=temp;
        }
    for (i=0;i<SIZE;i++)
        printf("%d ",a[i]);
    printf("\n");

    return 0;
}
unsigned int rand(void)
{
    next=next*1103515245+12345;
    return next%10+1;
}