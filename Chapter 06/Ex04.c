#include<stdio.h>
int main(void)
{
    char ch='A';
    int r,c;

    for (r=0;r<6;r++)
    {
        for (c=0;c<=r;c++,ch++)
            printf("%c",ch);
        printf("\n");
    }
    
    return 0;
}