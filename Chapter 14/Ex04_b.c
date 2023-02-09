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

void print(struct sscard st);

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
    int i;

    for (i=0;i<5;i++)
        print(st[i]);

    return 0;
}
void print(struct sscard st)
{
    printf("%s, %s %c. -- %s\n",
        st.owner_name.rep_name,
        st.owner_name.last_name,
        st.owner_name.middle_name[0],
        st.card_id);
}