#include<stdio.h>
#include<ctype.h>
#define NLEN 16
#define FSIZE 4
#define PSIZE 12

struct seat
{
    int id;
    int is_booking;
    char booker_first_name[NLEN];
    char booker_last_name[NLEN];
}plane[FSIZE][PSIZE];

const char *flight_id[FSIZE]={"102","311","444","519"};
int confirm[FSIZE];

void flight_menu(int flight_id);
char get_first(void);

int main(void)
{
    int choice;

    for (int i=0;i<FSIZE;i++)
        for (int j=0;j<PSIZE;j++)
            plane[i][j].id=j+1;

    while (1)
    {
        printf("Welcome to the Giant Airways booking system,\n");
        printf("below are the available flights:\n");
        printf("1)102    2)311    3)444    4)519\n");
        printf("Choose a flight or press 'q' to quit:");

        if (scanf("%d",&choice)!=1)
            break;
        else if (choice<1||choice>4)
            printf("Not a valid flight, please re-enter it.\n");
        else if (confirm[choice-1])
            printf("Flight %s is confirmed.\n",flight_id[choice-1]);
        else
            flight_menu(choice-1);
    }

    return 0;
}
void flight_menu(int id)
{
    char choice;
    int empty;
    int empty_i;
    int delete_i;
    int quit=0;

    while (1)
    {
        puts("");
        printf("You are now dealing with Flight %s.\n",flight_id[id]);
        printf("To choose a function, enter its letter label:\n");
        printf("a) Show number of empty seats\n");
        printf("b) Show list of empty seats\n");
        printf("c) Show alphabetical list of seats\n");
        printf("d) Assign a customer to a seat assignment\n");
        printf("e) Delete a seat assignment\n");
        printf("f) Confirm seat assignments for this flight\n");
        printf("g) Quit\n");

        printf("Enter your choice:");
        choice=get_first();

        switch (choice)
        {
            case 'a':
                empty=0;
                for (int i=0;i<PSIZE;i++)
                    if (!plane[id][i].is_booking)
                        empty++;
                printf("There are currently %d empty seat(s)\n",empty);
                break;
            case 'b':
                for (int i=0;i<PSIZE;i++)
                    if (!plane[id][i].is_booking)
                        printf("Seat number %d is unassigned\n",plane[id][i].id);
                break;
            case 'c':
                printf("%-*s %-*s %-12s\n",NLEN,"First name",NLEN,"Last name",
                    "Seat number");
                for (int i=0;i<PSIZE;i++)
                    if (plane[id][i].is_booking)
                        printf("%-*s %-*s %-12d\n",NLEN,plane[id][i].booker_first_name,
                            NLEN,plane[id][i].booker_last_name,plane[id][i].id);
                break;
            case 'd':
                for (empty_i=0;empty<PSIZE;empty_i++)
                    if (!plane[id][empty_i].is_booking)
                        break;
                if (empty_i==PSIZE)
                    printf("There are no empty seats now.\n");
                else
                {
                    plane[id][empty_i].is_booking=1;
                    printf("Enter your name:");
                    scanf("%s%s",plane[id][empty_i].booker_first_name,plane[id][empty_i].booker_last_name);
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
                plane[id][delete_i-1].is_booking=0;
                printf("Successful!\n");
                break;
            case 'f':
                confirm[id]=1;
                printf("Confirm.\n");
            case 'g':
                quit=1;
                break;
            default:
                printf("There is no such option!\n");
                break;
        }

        if (quit) break;
    }
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