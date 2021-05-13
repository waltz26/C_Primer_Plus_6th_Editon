#include<stdio.h>
void Temperatures(double fahr_para);

int main(void)
{
    double fahr_argue;

    printf("Enter a Fahrenheit temperature(q or other non-digit to quit): ");
    while (scanf("%lf",&fahr_argue)==1)
    {
        Temperatures(fahr_argue);
        printf("Enter next value(q or other non-digit to quit): ");
    }
    printf("Done!\n");

    return 0;
}
void Temperatures(double fahr_para)
{
    const double convert_cels_1=5.0/9.0,convert_cels_2=32.0;
    const double convert_kelv=273.16;
    double cels,kelv;

    cels=convert_cels_1*(fahr_para-convert_cels_2);
    kelv=cels+convert_kelv;
    printf("%.2f°F=%.2f°C=%.2fK\n\0",fahr_para,cels,kelv);
    //在windows命令行中输入chcp 65001可以解决输出乱码的问题
}