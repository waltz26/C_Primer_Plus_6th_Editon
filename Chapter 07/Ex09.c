#include<stdio.h>
int main(void)
{
    unsigned int input;
    int pd;

    printf("Enter a positive integer: ");
    scanf("%ud",&input);

    if (input<2)
        printf("No prime numbers.\n");
    else
    {
        printf("2 ");

        for (int i=3;i<=input;i++)     //1既不是素数也不是合数
        {
            pd=1;
            for (int j=2;j<i;j++)
                if (i%j==0) pd=0;

            if (pd) printf("%d ",i);
        }
        printf("\n");
    }

    printf("Done!\n");

    return 0;
}