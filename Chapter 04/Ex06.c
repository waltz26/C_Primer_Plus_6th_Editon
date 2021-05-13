#include<stdio.h>
#include<string.h>
int main(void)
{
    char first_name[20],last_name[20];
    int len_first_name,len_last_name;

    printf("Enter your first name: ");
    scanf("%s",first_name);
    printf("And enter your last name: ");
    scanf("%s",last_name);
    printf("%s %s\n",first_name,last_name);
    len_first_name=strlen(first_name);
    len_last_name=strlen(last_name);
    printf("%*d %*d\n",len_first_name,len_first_name,len_last_name,len_last_name);
    printf("%s %s\n",first_name,last_name);
    printf("%-*d %-*d\n",len_first_name,len_first_name,len_last_name,len_last_name);

    return 0;
}