#include<stdio.h>
#define SIZE 16

struct name
{
    char rep_name[SIZE];
    char middle_name[SIZE];
    char last_name[SIZE];
};
struct sscard
{
    char card_id[SIZE];
    struct name owner_name;
};

void print(const struct sscard *st,int n);

int main(void)
{
    const struct sscard st[5]={
        {
            "302039823",
            {
                "Dribble",
                "Mary",
                "Flossie"
            }
        },
        {
            "302039824",
            {
                "Ken",
                "Jam",
                "Tompson"
            }
        },
        {
            "302039825",
            {
                "Dennis",
                "Key",
                "Ritche"
            }
        },
        {
            "302039826",
            {
                "Shoutrap",
                "Math",
                "Benjary"
            }
        },
        {
            "302039827",
            {
                "Bill",
                "Sek",
                "Gate"
            }
        },
    };

    print(st,5);

    return 0;
}
void print(const struct sscard *st,int n)
{
    int i;

    for (i=0;i<n;i++)
        printf("%s, %s %c. -- %s\n",
            st[i].owner_name.rep_name,
            st[i].owner_name.last_name,
            st[i].owner_name.middle_name[0],
            st[i].card_id);
}