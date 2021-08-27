//Ex03_pel2-2b.c
//与Ex03_pel2-2a.c一起编译
#include<stdio.h>
#include"Ex03_pel2-2a.h"
int main(void)
{
    int mode=0,new_mode,dis;    //模式初始化为0
    double fuel;

    printf("Enter 0 for metric mode, 1 for US mode: ");
    scanf("%d",&new_mode);
    while (new_mode>=0)
    {
        set_mode(&mode,new_mode);
        get_info(mode,&dis,&fuel);
        show_info(mode,dis,fuel);
        printf("Enter 0 for metric mode, 1 for US mode");
        printf(" (-1 to quit): ");
        scanf("%d",&new_mode);
    }
    printf("Done.\n");

    return 0;
}