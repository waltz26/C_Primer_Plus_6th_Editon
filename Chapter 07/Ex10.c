#include<stdio.h>
#define type_1_cut_off_point 17850
#define type_2_cut_off_point 23900
#define type_3_cut_off_point 29750
#define type_4_cut_off_point 14875
#define not_exceeded_tax_rate 0.15
#define exceeded_tax_rate 0.28

int main()
{
    int income,command;
    int limit;
    float taxes;

    while (1)
    {
        printf("***************************************\n");
        printf("Please specify the type of tax payment:\n");
        printf("1) Single       2) Head of household\n");
        printf("3) Married      4) Married and divorced\n");
        printf("5) Quit\n");
        printf("***************************************\n");

        printf("Choose an option: ");
        if (scanf("%d",&command)!=1) 
            break;
        else if (command==1)
            limit=type_1_cut_off_point;
        else if (command==2)
            limit=type_2_cut_off_point;
        else if (command==3)
            limit=type_3_cut_off_point;
        else if (command==4)
            limit=type_4_cut_off_point;
        else if (command==5)
            break;
        else
            {printf("ERROR! Please enter the right option!\n"); continue;}

        printf("Enter taxable income: ");
        scanf("%d",&income);

        if (income<limit)
            taxes=income*not_exceeded_tax_rate;
        else
            taxes=limit*not_exceeded_tax_rate+(income-limit)*exceeded_tax_rate;
    
        printf("Tax payable is $%.2f.\n",taxes);
    }

    printf("Done!\n");
    
    return 0;
}