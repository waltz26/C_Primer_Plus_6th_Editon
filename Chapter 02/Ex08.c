#include<stdio.h>
void one_three(void);
void two(void);

int main(void)
{
    printf("starting now:\n");
    one_three();
    printf("done!\n");

    return 0;
}
void one_three(void)
{
    printf("one\n");
    two();    //函数可以调用另一个函数
    printf("three\n");
}
void two(void)
{
    printf("two\n");
}
//写了函数原型就不用考虑函数定义的顺序