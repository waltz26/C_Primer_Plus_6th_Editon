#include<stdio.h>
void br(void);
void ic(void);

int main(void)
{
    br();    //第一行，注意空格
    printf(", ");    
    ic();
    printf("\n");
    ic();    //第二行
    printf(",\n");
    br();    //第三行
    printf("\n");

    return 0;
}
void br(void)
{
    printf("Brazil, Russia");
}
void ic(void)
{
    printf("India, China");
}