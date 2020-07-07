#include<stdio.h>
int main(void)
{
    float s1=100,s2=100;
    int i=0;

    while (s2<=s1)
    {
        s1+=10;
        s2+=s2*0.05;
        i++;
    }
    printf("It takes %d years.\n",i);
    printf("Daphne's investment:%f$.\n",s1);
    printf("Deirdre's investment:%f$.\n",s2);

    return 0;
}