#include<stdio.h>
#include<ctype.h>
#define LEFT 0
#define CENTER 1
#define RIGHT 2

#define ON 1
#define OFF 0

char get_first(void);

const char *align[]={"left","center","right"};
const char *effect[]={"off","on"};

int main(void)
{
    unsigned long font;
    char choice;
    char set_c;
    int set_i;

    //font初始化
    font=(1<<24)|(12<<16)|(0<<3)|(0<<2)|(0<<1)|(0<<0);

    while (1)
    {
        //显示参数
        printf("  ID SIZE ALIGNMENT   B   I   U\n");
        printf(" %3ld  %3ld %6s     %3s %3s %3s\n\n",(font&0xff000000)>>24,(font&0xfe0000)>>16,
            align[(font&0x18)>>3],effect[(font&0x4)>0],effect[(font&0x2)>0],effect[(font&0x1)>0]);

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
            font&=0xffffff;
            font|=set_i<<24;
            break;
        case 's':
            printf("Enter font size (0-127): ");
            scanf("%d",&set_i);
            font&=0xff01ffff;
            font|=set_i<<16;
            break;
        case 'a':
            printf("Select alignment:\n");
            printf("l)left   c)center   r)right\n");
            set_c=get_first();
            font&=0xffffffe7;
            if (set_c=='l') font|=LEFT<<3;
            if (set_c=='c') font|=CENTER<<3;
            if (set_c=='r') font|=RIGHT<<3;
            break;
        case 'b':
            font^=1<<2;
            break;
        case 'i':
            font^=1<<1;
            break;
        case 'u':
            font^=1<<0;
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