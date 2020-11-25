#include<stdio.h>
void copy_ptrs(double *target,double *source_start,double *source_end);

int main(void)
{
    double source[7]={1.2,4.3,4.4,1.4,1.5,1.6,1.7};
    double target[3];

    copy_ptrs(target,source+2,source+5);
    printf("%g %g %g\n",target[0],target[1],target[2]);

    return 0;
}
void copy_ptrs(double *target,double *source_start,double *source_end)
{
    int cnt=0;

    while (source_start<source_end)
        *(target+cnt++)=*source_start++;
}