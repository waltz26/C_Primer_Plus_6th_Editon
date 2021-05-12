#include<stdio.h>
int main(void)
{
    //一些值
    printf("Int type integer maximum value:%d\n",__INT_MAX__);    //int类型整数最大值
    printf("Float type floating-point number maximum value:%e\n",__FLT_MAX__);    //float类型浮点数最大值
    printf("Float type floating-point number minimun value:%e\n",__FLT_MIN__);    //float类型浮点数最小值
    printf("\n");

    //用了书上的示例
    int i_value=3000000000;    //整数上溢
    float toobig=3.4e37*100.0f;    //浮点数上溢
    float toosmall=1.175494e-38/10;    //浮点数下溢

    printf("i_value=%d\n",i_value);
    printf("toobig=%e, toosmall=%e\n",toobig,toosmall);

    //GCC编译运行结果：
    //i_value=-1294967296
    //toobig=1.#INF00e+000, toosmall=1.175495e-039(不知道为什么会显示这样，正常结果应该是0.117549e-038)
    //clang未测试
    return 0;
}