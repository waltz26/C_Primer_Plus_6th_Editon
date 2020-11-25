#include<stdio.h>
#define SIZE 6

int subscript_of_max(double *array,int size);

int main(void)
{
    double array[SIZE]={1.2,4.3,0.1,4.4,5.6,6.3};

    printf("The subscript of the maximum value of the array is %d.\n",
        subscript_of_max(array,SIZE));

    return 0;
}
int subscript_of_max(double *array,int size)
{
    double maxn=0;
    int p=0;

    for (int i=0;i<size;i++)
        maxn=array[i]>maxn?p=i,array[i]:maxn;

    return p;
}