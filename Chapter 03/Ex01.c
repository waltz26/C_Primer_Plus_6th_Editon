#include<stdio.h>
#include<limits.h>
#include<float.h>
int main(void)
{
    printf("Int type integer maximum value:%d\n",INT_MAX);    //int类型整数最大值
    printf("Float type floating-point number maximum value:%e\n",FLT_MAX);    //float类型浮点数最大值
    printf("Float type floating-point number minimun value:%e\n",FLT_MIN);    //float类型浮点数最小值
    printf("\n");

    int i_value=3000000000;    //整数上溢
    float toobig=3.4e37*100.0f;    //浮点数上溢
    float toosmall=1.175494e-38/10;    //浮点数下溢

    printf("i_value=%d\n",i_value);
    printf("toobig=%e, toosmall=%e\n",toobig,toosmall);

    //GCC编译运行结果：
    //i_value=-1294967296
    //toobig=1.#INF00e+000, toosmall=1.175495e-039
    //clang未测试
    return 0;
}