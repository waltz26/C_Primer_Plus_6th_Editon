#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"Ex07_diceroll.h"
int main(void)
{
    int sets,dice,sides,roll;
    int i,count,status;

    srand((unsigned int)time(0));
    printf("Enter the number of sets; enter q to stop : ");
    while (scanf("%d",&sets)==1)
    {
        count=0;
        printf("How many sides and how many dice? ");
        if ((status=scanf("%d%d",&dice,&sides))!=2)
        {
            if (status=EOF)
                break;
            else
            {
                printf("You should have entered an integer.");
                printf(" Let's begin again.\n");
                while (getchar()!='\n')
                    continue;
                printf("How many sides and how many dice? ");
                continue;
            }
        }
        else if (sides<=0||dice<=0)
            printf("Invalid Value.\n");
        else
        {
            printf("Here are %d sets of %d %d-sided throws.\n",sets,dice,sides);
            for (i=0;i<sets;i++,count++)
            {
                roll=roll_n_dice(dice,sides);
                printf("%d ",roll);
                if (count==14)
                    {printf("\n"); count=-1;}
            }
            if (count) printf("\n");
        }

        printf("How many sets? Enter q to stop: ");
    }

    return 0;
}