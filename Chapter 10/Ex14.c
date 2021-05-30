#include<stdio.h>
void read(int n,int m,double array[n][m]);
void group_average(int n,int m,double array[n][m],double target[n]);
double total_average(int n,int m,double array[n][m]);
double max(int n,int m,double array[n][m]);
void print(int n,double group_average[n],double total_average,double max);

int main(void)
{
    double array[3][5],group_avg[3];
    double total_avg,max_num;

    printf("Enter three groups of numbers, each group contains 5 double numbers.\n");
    read(3,5,array);
    group_average(3,5,array,group_avg);
    total_avg=total_average(3,5,array);
    max_num=max(3,5,array);
    print(3,group_avg,total_avg,max_num);

    return 0;
}
void read(int n,int m,double array[n][m])
{
    for (int i=0;i<n;i++)
        for (int j=0;j<m;j++)
            scanf("%lf",*(array+i)+j);
}
void group_average(int n,int m,double array[n][m],double target[n])
{
    double subtot;

    for (int i=0;i<n;i++)
    {
        subtot=0;
        for (int j=0;j<m;j++)
            subtot+=array[i][j];
        target[i]=subtot/5;
    }
}
double total_average(int n,int m,double array[n][m])
{
    double total=0;

    for (int i=0;i<n;i++)
        for (int j=0;j<m;j++)
            total+=array[i][j];

    return total/15;
}
double max(int n,int m,double array[n][m])
{
    double maxn=0;

    for (int i=0;i<n;i++)
        for (int j=0;j<m;j++)
            maxn=array[i][j]>maxn?array[i][j]:maxn;

    return maxn;
}
void print(int n,double group_average[n],double total_average,double max)
{
    printf("The average number of each group:\n");
    for (int i=0;i<n;i++)
        printf("%g ",group_average[i]);
    printf("\n");

    printf("The average of all numbers: %g\n",total_average);
    printf("The maximum value of all types: %g\n",max);
}