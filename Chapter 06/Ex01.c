#include<stdio.h>
int main(void)
{
    char alpha[27];
    int i,j;    //j为计数器

    for (i='a',j=0;i<='z';i++,j++)
        alpha[j]=i;
    alpha[j]='\0';
    printf("%s\n",alpha);

    return 0;
}