#include<stdio.h>
int main(void)
{
    char input;
    char _ch,ch;
    int r,c;

    printf("Enter a capital letter: ");
    scanf("%c",&input);
    for (r=0,_ch='A';_ch<=input;r++,_ch++)
    {
        for (ch=input;ch>'A'+r;ch--)    //处理空格
            printf(" ");
        for (c=0,ch='A';c<r;c++,ch++)    //以升序打印字母
            printf("%c",ch);
        printf("%c",ch--);
        for (c=0;c<r;c++,ch--)    //以降序打印字母
            printf("%c",ch);
        printf("\n");
    }

    return 0;
}