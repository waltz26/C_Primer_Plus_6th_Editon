#include<stdio.h>
void jolly(void);
void deny(void);

int main(void)
{
    jolly();    //打印前3条消息
    jolly();
    jolly();
    deny();    //打印最后1条消息

    return 0;
}
void jolly(void)
{
    printf("For he's a jolly good fellow!\n");
}
void deny(void)
{
    printf("Which nobody can deny!\n");
}