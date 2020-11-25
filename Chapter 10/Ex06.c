#include<stdio.h>
#define SIZE 6

void select_sort(double *array,int size);

int main(void)
{
    double array[SIZE]={1.2,4.3,0.1,4.4,5.6,6.3};

    printf("Unsorted array.\n");
    for (int i=0;i<6;i++)
        printf("%g ",array[i]);

    select_sort(array,6);
    printf("\nSorted array.\n");
    for (int i=0;i<6;i++)
        printf("%g ",array[i]);
    printf("\n");

    return 0;
}
void select_sort(double *array,int size)
{
    for (int i=0;i<size;i++)
        for (int j=i+1;j<size;j++)
            if (array[i]<array[j])
            {
                double temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
}