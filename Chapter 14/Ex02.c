#include<stdio.h>
#include<string.h>
#define LEN_NUM 3
#define LEN_FULL 10
#define LEN_ABBR 4
#define LEN_YEAR 5

struct month
{
    char num_name[LEN_NUM];
    char full_name[LEN_FULL];
    char abbreviation_name[LEN_FULL];
    int day;
};

int main(void)
{
    struct month month_table[12]={
        {
            "1",
            "January",
            "Jan",
            31
        },
        {
            "2",
            "Febuary",
            "Feb",
            28
        },
        {
            "3",
            "March",
            "Mar",
            31
        },
        {
            "4",
            "April",
            "Apr",
            30
        },
        {
            "5",
            "May",
            "May",
            31
        },
        {
            "6",
            "June",
            "Jun",
            30
        },
        {
            "7",
            "July",
            "Jul",
            31
        },
        {
            "8",
            "August",
            "Aug",
            31
        },
        {
            "9",
            "September",
            "Sep",
            30
        },
        {
            "10",
            "October",
            "Oct",
            31
        },
        {
            "11",
            "November",
            "Nov",
            30
        },
        {
            "12",
            "December",
            "Dec",
            31
        }
    };
    char month[LEN_FULL];
    int day,year;
    int i=0,sum=0;

    printf("Enter the day, month, and year. The month can be the month number,\n"
        "month name, or month name abbreviation. (Separated by spaces):\n");
    scanf("%d%s%d",&day,month,&year);
    if(year%400==0)
        month_table[1].day=29;
    else if(year%4==0&&year%100)
            month_table[1].day=29;
    else ;
    while (strcmp(month,month_table[i].num_name)&&
        strcmp(month,month_table[i].full_name)&&
        strcmp(month,month_table[i].abbreviation_name))
    {
        sum+=month_table[i++].day;
    }
    sum+=day;
    printf("The total number of days is %d.\n",sum);

    return 0;
}