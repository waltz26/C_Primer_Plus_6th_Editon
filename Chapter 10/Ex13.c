#include<stdio.h>
void read(double array[][5],int size);
void group_average(double array[][5],double target[],int size);
double total_average(double array[][5],int size);
double max(double array[][5],int size);
void print(double *group_average,double total_average,double max,int size);

int main(void)
{
    double array[3][5],group_avg[3];
    double total_avg,max_num;

    printf("Enter three groups of numbers, each group contains 5 double numbers.\n");
    read(array,3);
    group_average(array,group_avg,3);
    total_avg=total_average(array,3);
    max_num=max(array,3);
    print(group_avg,total_avg,max_num,3);

    return 0;
}
void read(double array[][5],int size)
{
    for (int i=0;i<size;i++)
        for (int j=0;j<5;j++)
            scanf("%lf",*(array+i)+j);
}
void group_average(double array[][5],double target[],int size)
{
    double subtot;

    for (int i=0;i<size;i++)
    {
        subtot=0;
        for (int j=0;j<5;j++)
            subtot+=array[i][j];
        target[i]=subtot/5;
    }
}
double total_average(double array[][5],int size)
{
    double total=0;

    for (int i=0;i<size;i++)
        for (int j=0;j<5;j++)
            total+=array[i][j];

    return total/15;
}
double max(double array[][5],int size)
{
    double maxn=0;

    for (int i=0;i<size;i++)
        for (int j=0;j<5;j++)
            maxn=array[i][j]>maxn?array[i][j]:maxn;

    return maxn;
}
void print(double *group_average,double total_average,double max,int size)
{
    printf("The average number of each group:\n");
    for (int i=0;i<size;i++)
        printf("%g ",group_average[i]);
    printf("\n");

    printf("The average of all numbers: %g\n",total_average);
    printf("The maximum value of all types: %g\n",max);
}