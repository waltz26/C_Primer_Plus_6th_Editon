#include<stdio.h>
#define SIZE 10
#define NUM 10
#define TIMES 1000

unsigned int rand(void);

unsigned int next;

int main(void)
{
    int seed[SIZE],count[NUM];
    int i,j;

    printf("Enter ten seed values:\n");
    for (i=0;i<SIZE;i++)
        scanf("%d",&seed[i]);
    printf("Statistics:\n");
    printf("(Seed)    (1)  (2)  (3)  (4)  (5)  (6)  (7)  (8)  (9)  (10)\n");
    for (i=0;i<SIZE;i++)
    {
        printf("%-9d ",seed[i]);
        next=seed[i];
        for (j=0;j<NUM;j++)
            count[j]=0;
        for (j=0;j<TIMES;j++)
            count[rand()-1]++;
        for (j=0;j<NUM;j++)
            printf("%-4d ",count[j]);
        printf("\n");
    }

    return 0;
}
unsigned int rand(void)
{
    next=next*1103515245+12345;

    return next%10+1;
}