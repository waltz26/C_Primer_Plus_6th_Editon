#include<stdio.h>
void double_VLA(int n,int m,int source[n][m]);
void print_VLA(int n,int m,int array[n][m]);

int main(void)
{
    int source[3][5]={
        {1,4,7,5,3},
        {2,6,5,3,9},
        {3,7,4,8,0}
    };

    print_VLA(3,5,source);
    double_VLA(3,5,source);
    print_VLA(3,5,source);

    return 0;
}
void double_VLA(int n,int m,int source[n][m])
{
    for (int i=0;i<n;i++)
        for (int j=0;j<m;j++)
            source[i][j]*=2;
}
void print_VLA(int n,int m,int array[n][m])
{
    for (int i=0;i<n;i++,printf("\n"))
        for (int j=0;j<m;j++)
            printf("%d ",array[i][j]);
}