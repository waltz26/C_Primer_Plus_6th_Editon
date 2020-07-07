#include<stdio.h>
int main(void)
{
    char ch;
    int r,c;
    
    for (r=0;r<6;r++)
    {
        for (c=0,ch='F';c<=r;c++,ch--)
            printf("%c",ch);
        printf("\n");
    }
    
    return 0;
}