#include<stdio.h>
#define SIZE 6

double max_min_difference(double *array,int size);

int main(void)
{
    double array[SIZE]={1.2,4.3,0.1,4.4,5.6,6.3};

    printf("The difference between the maximum and minimum values of the array is %g.\n",
        max_min_difference(array,SIZE));

    return 0;
}
double max_min_difference(double *array,int size)
{
    double maxn=0,minn=*array;

    for (int i=0;i<size;i++)
    {
        maxn=array[i]>maxn?array[i]:maxn;
        minn=array[i]<minn?array[i]:minn;
    }

    return maxn-minn;
}