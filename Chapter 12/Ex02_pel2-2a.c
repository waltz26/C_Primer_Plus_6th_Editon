#include<stdio.h>

int mode=0,dis;    //模式初始化为0
double fuel;

void set_mode(int new_mode)
{
    if (new_mode==0||new_mode==1)
        mode=new_mode;
}
void get_info(void)
{
    switch (mode)
    {
        case 0:
            printf("Enter distance traveled in kilometers: ");
            scanf("%d",&dis);
            printf("Enter fuel consumed in liters: ");
            scanf("%lf",&fuel);
            break;
        case 1:
            printf("Enter distance traveled in miles: ");
            scanf("%d",&dis);
            printf("Enter fuel consumed in gallons: ");
            scanf("%lf",&fuel);
            break;
        default:
            break;
    }
}
void show_info(void)
{
    switch (mode)
    {
        case 0:
            printf("Fuel consumption is %.2f liters per 100 km.\n",fuel/(1.0*dis/100));
            break;
        case 1:
            printf("Fuel consumption is %.1f miles per gallon.\n",1.0*dis/fuel);
            break;
        default:
            break;
    }
}