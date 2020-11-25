#include<stdio.h>
#define SIZE 4

void plus(int *left,int *right,int *ans,int size);

int main(void)
{
    int target1[SIZE]={2,4,5,8};
    int target2[SIZE]={1,0,4,6};
    int target3[SIZE];

    plus(target1,target2,target3,SIZE);

    return 0;
}
void plus(int *left,int *right,int *ans,int size)
{
    for (int i=0;i<size;i++)
        ans[i]=left[i]+right[i];
}