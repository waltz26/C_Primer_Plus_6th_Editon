#include<stdio.h>
void copy_VLA(int n,int m,double source[n][m],double target[n][m]);
void print_VLA(int n,int m,double array[n][m]);

int main(void)
{
    double source[3][5]={
        {1.5,1.6,1.7,1.8,1.9},
        {2.5,2.6,2.7,2.8,2.9},
        {3.5,3.4,3.3,3.2,3.1}
    };
    double target[3][5];

    copy_VLA(3,5,source,target);
    print_VLA(3,5,source);
    print_VLA(3,5,target);

    return 0;
}
void copy_VLA(int n,int m,double source[n][m],double target[n][m])
{
    for (int i=0;i<n;i++)
        for (int j=0;j<m;j++)
            target[i][j]=source[i][j];
}
void print_VLA(int n,int m,double array[n][m])
{
    for (int i=0;i<n;i++,printf("\n"))
        for (int j=0;j<m;j++)
            printf("%g ",array[i][j]);
}