#include<stdio.h>
int main(void)
{
    int num[8];
    int i;

    printf("Enter eight integers:\n");
    for (i=0;i<8;i++)
        scanf("%d",&num[i]);
    for (i=7;i>=0;i--)
        printf("%d ",num[i]);
    printf("\n");

    return 0;
}