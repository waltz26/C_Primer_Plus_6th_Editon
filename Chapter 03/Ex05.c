#include<stdio.h>
int main(void)
{
    float age;

    printf("Enter your age: ");
    scanf("%f",&age);
    printf("Your age corresponds to %e seconds.\n",3.156e7*age);
     
    return 0;
}