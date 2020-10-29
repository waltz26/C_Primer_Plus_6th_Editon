#include<stdio.h>
int main(void)
{
    char ch;
    int count_space=0,count_wrap=0,count_other=0;

    while ((ch=getchar())!='#')
    {
        if (ch==' ')
            count_space++;
        else if (ch=='\n')
            count_wrap++;
        else count_other++;
    }

    printf("Character Statistics: (space) (warp) (other)\n");
    printf("                      %7d %6d %7d\n",count_space,count_wrap,count_other);
    printf("Done!\n");

    return 0;
}