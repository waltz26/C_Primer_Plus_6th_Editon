#include<stdio.h>
#include<string.h>
int main(void)
{
    char first_name[20];
    int width;
    
    printf("Enter your first name: ");
    scanf("%s",first_name);
    printf("\"%s\"\n",first_name);    //a
    printf("\"%20s\"\n",first_name);    //b
    printf("\"%-20s\"\n",first_name);    //c
    width=strlen(first_name);
    printf("\"%*s\"\n",width+3,first_name);    //d

    return 0;
}