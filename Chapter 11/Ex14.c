#include<stdio.h>
int main(int argc,char *argv[])
{
    double x,ans=1;
    int i,y;

    sscanf(argv[1],"%lf",&x);
    sscanf(argv[2],"%d",&y);
    for (i=0;i<y;i++)
        ans*=x;
    printf("%.2f power %d is %.2f\n",x,y,ans);

    return 0;
}