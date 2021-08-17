#include<stdio.h>
int main(void)
{
    char first_name[20],last_name[20];

    printf("Enter your first name: ");
    scanf("%s",first_name);
    printf("Enter your last name: ");
    scanf("%s",last_name);
    printf("%s,%s\n",first_name,last_name);

    return 0;
}