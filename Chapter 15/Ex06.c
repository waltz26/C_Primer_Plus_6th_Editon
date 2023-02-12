#include<stdio.h>
#include<ctype.h>
#define LEFT 0
#define CENTER 1
#define RIGHT 2

#define ON 1
#define OFF 0

struct font_setting
{
    unsigned int id:8;
    unsigned int size:7;
    unsigned int alignment:2;
    unsigned int bold:1;
    unsigned int italic:1;
    unsigned int underline:1;
};

char get_first(void);

struct font_setting font={
    .id=1,
    .size=12,
    .alignment=LEFT,
    .bold=OFF,
    .italic=OFF,
    .underline=OFF,
};

const char *align[]={"left","center","right"};
const char *effect[]={"off","on"};

int main(void)
{
    char choice;
    char set_c;
    int set_i;

    while (1)
    {
        //显示参数
        printf("  ID SIZE ALIGNMENT   B   I   U\n");
        printf(" %3d  %3d %6s     %3s %3s %3s\n\n",font.id,font.size,align[font.alignment],
            effect[font.bold],effect[font.italic],effect[font.underline]);

        //菜单
        printf("f)change font    s)change size    a)change alignment\n");
        printf("b)toggle bold    i)toggle italic  u)toggle underline\n");
        printf("q)quit\n");

        choice=get_first();

        switch (choice)
        {
        case 'f':
            printf("Enter font id (0-255): ");
            scanf("%d",&set_i);
            font.id=set_i;
            break;
        case 's':
            printf("Enter font size (0-127): ");
            scanf("%d",&set_i);
            font.size=set_i;
            break;
        case 'a':
            printf("Select alignment:\n");
            printf("l)left   c)center   r)right\n");
            set_c=get_first();
            if (set_c=='l') font.alignment=LEFT;
            if (set_c=='c') font.alignment=CENTER;
            if (set_c=='r') font.alignment=RIGHT;
            break;
        case 'b':
            font.bold^=1;
            break;
        case 'i':
            font.italic^=1;
            break;
        case 'u':
            font.underline^=1;
            break;
        case 'q':
            printf("Done\n");
            return 0;
        default:
            printf("Error! Please re-enter.\n");
            break;
        }

        puts("");
    }

    return 0;
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