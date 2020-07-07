#include<stdio.h>
int main(void)
{
    //用了书上的示例
    int i_value=3000000000;    //2147483647为32位带符号整型‬的上限值‬
    float toobig=3.4e37*100.0f;    //单精度浮点型的上限值至少为10的37次方级(基本在3.4E38这个值)
    float toosmall=0.01234e-37/10;    //单精度浮点型的下限值至多为10的-37次方级，有效数字6位

    printf("i_value=%d\n",i_value);
    printf("toobig=%e toosmall=%e\n",toobig,toosmall);

    //GCC编译运行结果：
    //i_value=-1294967296
    //toobig=1.#INF00e+000 toosmall=1.233997e-040
    //clang未测试
    return 0;
}