#include<stdio.h>
int main(void)
{
    int lo_lim,up_lim;
    int i;

    printf("Enter the lower and upper limits of the form:\n");
    scanf("%d%d",&lo_lim,&up_lim);
    printf("(Origin)  (Square)  (Cube)\n");
    for (i=lo_lim;i<=up_lim;i++)
        printf("%-9d %-9d %-9d\n",i,i*i,i*i*i);

    return 0;
}