#include<stdio.h>
#define basic_wage 10.00
#define overtime_40_multiple 1.5
#define tax_rate_1 0.15
#define tax_rate_2 0.20
#define tax_rate_3 0.25

int main(void)
{
    int work_hour;
    float total_salary,taxes,net_income;

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

    return 0;
}