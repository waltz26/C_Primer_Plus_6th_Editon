#include<stdio.h>
int main(void)
{
    float height;
    char first_name[20];

    printf("Enter height(inch): ");
    scanf("%f",&height);
    printf("And Enter your name: ");
    scanf("%s%*s",first_name);    //抑制输入名字的last_name部分
    printf("%s, you are %.3f feet tall\n",first_name,height/12);

    return 0;
}