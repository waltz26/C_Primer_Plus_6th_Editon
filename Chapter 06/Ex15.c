#include<stdio.h>
int main(void)
{
    char s[256];
    int i;

    for (i=0;s[i-1]!='\n';i++)    //For循环是先自增再判断
        scanf("%c",&s[i]);
    for (i=i-2;i>=0;i--)      //假设上面循环
        printf("%c",s[i]);
    printf("\n");

    return 0;
}