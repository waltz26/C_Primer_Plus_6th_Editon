#include<stdio.h>
#define SIZE 16
#define CSIZE 4

struct name
{
    char first_name[SIZE];
    char last_name[SIZE];
};
struct student
{
    struct name stu_name;
    float grade[3];
    float grade_avg;
};

void avg(struct student *st,int n);
void print(const struct student *st,int n);
void all_avg(const struct student *st,struct student *avg,int n);


int main(void)
{
    struct student class[CSIZE]={
            {
                {
                    "null",
                    "null"
                }
            },
            {
                {
                    "null",
                    "null"
                }
            },
            {
                {
                    "null",
                    "null"
                }
            },
            {
                {
                    "null",
                    "null"
                }
            }
        };
    struct student class_avg={
        {
            "all"
            "class"
        }
    };
    int i;

    printf("Enter the names and 3 scores of four students\n"
        "in sequence (one student per line):\n");
    for (i=0;i<CSIZE;i++)
    {
        scanf("%s%s%f%f%f",class[i].stu_name.first_name,
            class[i].stu_name.last_name,&class[i].grade[0],
            &class[i].grade[1],&class[i].grade[2]);
    }

    avg(class,CSIZE);
    print(class,CSIZE);
    all_avg(class,&class_avg,CSIZE);
    printf("(student average)\n");
    printf("[Math]%.2f [English]%.2f [Chinese]%.2f [avg]%.2f\n",
            class_avg.grade[0],class_avg.grade[1],class_avg.grade[2],class_avg.grade_avg);

    return 0;
}
void avg(struct student *st,int n)
{
    int i;

    for (i=0;i<n;i++)
        st[i].grade_avg=(st[i].grade[0]+st[i].grade[1]+st[i].grade[2])/3;
}
void print(const struct student *st,int n)
{
    int i;

    for (i=0;i<n;i++)
    {
        printf("(student %d)\n",i+1);
        printf("%s %s\n[Math]%.2f [English]%.2f [Chinese]%.2f [avg]%.2f\n",
            st[i].stu_name.first_name,st[i].stu_name.last_name,
            st[i].grade[0],st[i].grade[1],st[i].grade[2],st[i].grade_avg);
    }
}
void all_avg(const struct student *st,struct student *avg,int n)
{
    int i;

    for (i=0;i<n;i++)
    {
        avg->grade[0]+=st[i].grade[0];
        avg->grade[1]+=st[i].grade[1];
        avg->grade[2]+=st[i].grade[2];
        avg->grade_avg+=st[i].grade_avg;
    }

    avg->grade[0]/=4;
    avg->grade[1]/=4;
    avg->grade[2]/=4;
    avg->grade_avg/=4;
}