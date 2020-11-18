#include<stdio.h>

int main(void)
{
    char ch;
    int guess=50;
    int left=0,right=100;
    
    printf("Pick an integer from 1 to 100. I will try to guess it.\n");
    printf("Respond with a y if my guess is right, with a b if is\n");
    printf("bigger than my guess and with a s if it is smaller than\n");
    printf("my guess.\n");
    printf("Uh...is your number %d?\n",guess);
    while ((ch=getchar())!='y')
    {
        if (ch=='b')
        {
            right=guess;
            printf("Well, then, is it %d?\n",guess=(left+guess)/2);
        }
        else
        {
            left=guess;
            printf("Well, then, it is %d?\n",guess=(guess+right)/2);
        }

        while (getchar()!='\n')
            continue;
    }
    printf("I knew I could do it!\n");

    return 0;
}