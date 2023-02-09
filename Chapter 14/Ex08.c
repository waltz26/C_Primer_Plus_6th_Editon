#include<stdio.h>
#define NLEN 16
#define SIZE 12

struct seat
{
    int id;
    int is_booking;
    char booker_first_name[NLEN];
    char booker_last_name[NLEN];
}plane[SIZE];

int main(void)
{
    char choice;
    int empty;
    int empty_i;
    int delete_i;

    for (int i=0;i<SIZE;i++)
        plane[i].id=i+1;

    while (1)
    {
        printf("To choose a function, enter its letter label:\n");
        printf("a) Show number of empty seats\n");
        printf("b) Show list of empty seats\n");
        printf("c) Show alphabetical list of seats\n");
        printf("d) Assign a customer to a seat assignment\n");
        printf("e) Delete a seat assignment\n");
        printf("f) Quit\n");

        printf("Enter your choice: ");
        choice=getchar();
        while (getchar()!='\n')
            continue;

        switch (choice)
        {
            case 'a':
                empty=0;
                for (int i=0;i<SIZE;i++)
                    if (!plane[i].is_booking)
                        empty++;
                printf("There are currently %d empty seat(s)\n",empty);
                break;
            case 'b':
                for (int i=0;i<SIZE;i++)
                    if (!plane[i].is_booking)
                        printf("Seat number %d is unassigned\n",plane[i].id);
                break;
            case 'c':
                printf("%-*s %-*s %-12s\n",NLEN,"First name",NLEN,"Last name",
                    "Seat number");
                for (int i=0;i<SIZE;i++)
                    if (plane[i].is_booking)
                        printf("%-*s %-*s %-12d\n",NLEN,plane[i].booker_first_name,
                            NLEN,plane[i].booker_last_name,plane[i].id);
                break;
            case 'd':
                for (empty_i=0;empty<SIZE;empty_i++)
                    if (!plane[empty_i].is_booking)
                        break;
                if (empty_i==SIZE)
                    printf("There are no empty seats now.\n");
                else
                {
                    plane[empty_i].is_booking=1;
                    printf("Enter your name:");
                    scanf("%s%s",plane[empty_i].booker_first_name,plane[empty_i].booker_last_name);
                    while (getchar()!='\n')    //清除缓冲区
                        continue;
                    printf("Successful!\n");
                }
                break;
            case 'e':
                printf("Enter the seat number you want to delete:");
                scanf("%d",&delete_i);
                while (getchar()!='\n')    //清除缓冲区
                    continue;
                plane[delete_i-1].is_booking=0;
                printf("Successful!\n");
                break;
            case 'f':
                printf("Done\n");
                return 0;
            default:
                printf("There is no such option!\n");
                break;
        }

        puts("");
    }
    return 0;
}