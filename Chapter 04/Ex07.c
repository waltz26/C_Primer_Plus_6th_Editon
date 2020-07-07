#include<stdio.h>
#include<float.h>
int main(void)
{
    float number_a=1.0/3.0;
    double number_b=1.0/3.0;

    printf("%.6f %.6f\n",number_a,number_b);
    printf("%.12f %.12f\n",number_a,number_b);
    printf("%.16f %.16f\n",number_a,number_b);
    printf("FLT_DIG=%d, DBL_DIG=%d\n",FLT_DIG,DBL_DIG);

    //不一致，实际精度可能要大一些
    //0.333333 0.333333
    //0.333333343267 0.333333333333
    //0.3333333432674408 0.3333333333333333(1)
    //FLT_DIG=6, DBL_DIG=15
    return 0;
}