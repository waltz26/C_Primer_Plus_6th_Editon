#include<stdio.h>
int main(void)
{
    char ch_now,ch_last=' ';
    int count=0;

    while ((ch_now=getchar())!='#')
    {
        if (ch_last=='e'&&ch_now=='i')
            count++;
        ch_last=ch_now;
    }

    printf("The string \"ei\" appears %d time(s).\n",count);
    printf("Done!\n");

    return 0;
}