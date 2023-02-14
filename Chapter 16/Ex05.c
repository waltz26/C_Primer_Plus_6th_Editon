#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void choose(int *a,int size,int time);

int main(void)
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};

    choose(a,10,5);

    return 0;
}
void choose(int *a,int size,int times)
{
    int *vis=(int *)calloc(size,sizeof(int));
    int pos;

    if (size<times)
    {
        printf("The number of selections is less than the number of elements.\n");
        return;
    }

    srand(time(NULL));

    while (times)
    {
        pos=rand()%size;
        if (!vis[pos])
        {
            printf("%d ",a[pos]);
            vis[pos]=1;
            times--;
        }
        else
            continue;
    }

    puts("");
}