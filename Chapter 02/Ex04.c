#include<stdio.h>

void jolly(void);
void deny(void);

int main(void)
{
    jolly();    //调用一次打印一条
    jolly();
    jolly();
    deny();

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