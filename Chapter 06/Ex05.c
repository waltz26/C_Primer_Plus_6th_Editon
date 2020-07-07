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
        for (ch=input;ch>'A'+r;ch--)
            printf(" ");
        for (c=0,ch='A';c<r;c++,ch++)    //注意是小于号
            printf("%c",ch);
        printf("%c",ch--);
        for (c=0;c<r;c++,ch--)
            printf("%c",ch);
        printf("\n");
    }

    return 0;
}