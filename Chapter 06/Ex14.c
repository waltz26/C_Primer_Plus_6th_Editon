#include<stdio.h>
int main(void)
{
    double a[8],s[8];
    int i;

    printf("Enter eight double-precision floating-point numbers:\n");
    scanf("%lf",&a[0]);    //预先输入第一个数组的第一个数值
    for (s[0]=a[0],i=1;i<8;i++)
    {
        scanf("%lf",&a[i]);
        s[i]=s[i-1]+a[i];
    }
    for (i=0;i<8;i++)    //输出第一个数组
        printf("%f ",a[i]);
    printf("\n");
    for (i=0;i<8;i++)    //输出第二个数组
        printf("%f ",s[i]);
    printf("\n");

    return 0;
}