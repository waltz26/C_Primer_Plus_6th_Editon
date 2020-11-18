#include<stdio.h>
void smile(void);

int main(void)
{
    smile();    //第一行
    smile();
    smile();
    printf("\n");
    smile();    //第二行
    smile();
    printf("\n");
    smile();    //第三行
    printf("\n");

    return 0;
}
void smile(void)
{
    printf("Smile!");
}