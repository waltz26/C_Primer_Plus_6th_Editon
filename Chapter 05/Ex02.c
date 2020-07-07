#include<stdio.h>
int main(void)
{
    int num;
    int border;

    printf("Enter an integer: ");
    scanf("%d",&num);
    border=num+10;
    while (num<border)
        printf("%d ",num++);
    printf("%d\n",num);

    return 0;
}