#include<stdio.h>
#include<ctype.h>
#define basic_wage_1 8.75
#define basic_wage_2 9.33
#define basic_wage_3 10.00
#define basic_wage_4 11.20
#define overtime_40_multiple 1.5
#define tax_rate_1 0.15
#define tax_rate_2 0.20
#define tax_rate_3 0.25

char get_choice(void);
char get_first(void);

int main(void)
{
    int work_hour,command;
    float basic_wage,total_salary,taxes,net_income;

    while ((command=get_choice())!='q')
    {
        printf("Enter the number of hours worked in a week: ");
        scanf("%d",&work_hour);

        if (work_hour>=40)
            total_salary=40*basic_wage+(work_hour-40)*overtime_40_multiple;
        else total_salary=work_hour*basic_wage;

        if (total_salary<300)
            taxes=total_salary*tax_rate_1;
        else if (total_salary<450)
            taxes=300*tax_rate_1+(total_salary-300)*tax_rate_2;
        else taxes=300*tax_rate_1+150*tax_rate_2+(total_salary-450)*tax_rate_3;

        net_income=total_salary-taxes;

        printf("Total salary=%.2f;\n",total_salary);
        printf("Taxes=%.2f;\n",taxes);
        printf("Net income=%.2f.\n",net_income);
    }

    printf("Done!\n");
    
    return 0;
}

char get_choice(void)
{
    char ch;

    printf("*****************************************************************\n");
    printf("Enter the number corresponding to the desired pay rate or action:\n");
    printf("a) $8.75/hr                          b) $9.33/hr\n");
    printf("c) $10.00/hr                         d) $11.20/hr\n");
    printf("q) quit\n");
    printf("*****************************************************************\n");
    printf("Choose an option: ");
    ch=get_first();
    while ((ch<'a'||ch>'d')&&ch!='q')
    {
        printf("Please respond with a, b, c, or q.\n");
        ch=get_first();
    }

    return ch;
}
char get_first(void)
{
    int ch;

    while (isspace(ch=getchar()))
        continue;
    while (getchar()!='\n')
        continue;
    
    return ch;
}