#include<stdio.h>
#define SIZE 5

int max_of_array(int *array,int size);

int main(void)
{
    int array[SIZE]={4,5,7,1,6};

    printf("The maximum value of the array is %d.\n",
        max_of_array(array,SIZE));

    return 0;
}
int max_of_array(int *array,int size)
{
    int maxn=0;

    for (int i=0;i<size;i++)
        maxn=maxn>array[i]?maxn:array[i];

    return maxn;
}