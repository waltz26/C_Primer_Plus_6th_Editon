#include<stdio.h>
#define basic_wage_1 8.75
#define basic_wage_2 9.33
#define basic_wage_3 10.00
#define basic_wage_4 11.20
#define overtime_40_multiple 1.5
#define tax_rate_1 0.15
#define tax_rate_2 0.20
#define tax_rate_3 0.25

int main(void)
{
    int work_hour,command;
    float basic_wage,total_salary,taxes,net_income;

    while (1)
    {
        printf("*****************************************************************\n");
        printf("Enter the number corresponding to the desired pay rate or action:\n");
        printf("1) $8.75/hr                          2) $9.33/hr\n");
        printf("3) $10.00/hr                         4) $11.20/hr\n");
        printf("5) quit\n");
        printf("*****************************************************************\n");

        printf("Choose an option: ");
        if (scanf("%d",&command)!=1) 
            break;
        else if (command==1)
            basic_wage=basic_wage_1;
        else if (command==2)
            basic_wage=basic_wage_2;
        else if (command==3)
            basic_wage=basic_wage_3;
        else if (command==4)
            basic_wage=basic_wage_4;
        else if (command==5)
            break;
        else
            {printf("ERROR! Please enter the right option!\n"); continue;}
        
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