#include<stdio.h>
#include<string.h>
#define LEN_ABBR 4
#define LEN_FULL 10

struct month
{
    char abbreviation_name[LEN_FULL];
    int day;
    char full_name[LEN_FULL];
};

char *s_gets(char *s,int n);

int main(void)
{
    const struct month month_table[12]={
        {
            "Jan",
            31,
            "January"
        },
        {
            "Feb",
            28,
            "Febuary"
        },
        {
            "Mar",
            31,
            "March"
        },
        {
            "Apr",
            30,
            "April"
        },
        {
            "May",
            31,
            "May"
        },
        {
            "Jun",
            30,
            "June"
        },
        {
            "Jul",
            31,
            "July"
        },
        {
            "Aug",
            31,
            "August"
        },
        {
            "Sep",
            30,
            "September"
        },
        {
            "Oct",
            31,
            "October"
        },
        {
            "Nov",
            30,
            "November"
        },
        {
            "Dec",
            31,
            "December"
        }
    };
    char s[LEN_FULL];
    int i=0,sum=0;

    printf("Enter month name (first letter capitalized):\n");
    s_gets(s,LEN_FULL-1);
    do
    {
        sum+=month_table[i].day;
    }while (strcmp(s,month_table[i++].full_name)!=0);
    printf("The total number of days is %d.\n",sum);

    return 0;
}
char *s_gets(char *s,int n)
{
    char *p,*find;

    p=fgets(s,n,stdin);
    if (p)
    {
        find=strchr(s,'\n');
        if (find)
            *find='\0';
        else
            while (getchar()!='\n')
                continue;
    }

    return p;
}