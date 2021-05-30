#include<stdio.h>
#define COL 6
#define ROW 6

void copy_ptr(double *target,double *source,int size);

int main(void)
{
    double source[ROW][COL]={
        {1.2,1.3,1.4,1.5,1.6,1.7},
        {3.3,3.4,3.5,3.6,3.7,3.8},
        {4.1,4.2,4.3,4.4,4.5,4.6},
        {5.1,5.2,5.3,5.4,5.5,5.6},
        {7.1,7.2,7.3,7.7,7.5,7.6},
        {6.1,6.2,6.3,6.4,6.5,6.6},
    };
    double target[ROW][COL];

    for (int i=0;i<ROW;i++)
        copy_ptr(*target+COL*i,*source+COL*i,COL);

    return 0;
}
void copy_ptr(double *target,double *source,int size)
{
    for (int i=0;i<size;i++)
        target[i]=source[i];
}