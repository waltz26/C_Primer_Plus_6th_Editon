#include<stdio.h>
void chline(char ch,int n,int m);

int main(void)
{
    char ch;
    int i,j;

    scanf("%c%d%d",&ch,&i,&j);
    chline(ch,j,i);

    return 0;
}
void chline(char ch,int n,int m)
{
    for (int i=1;i<=n;i++,printf("\n"))
        for (int j=1;j<=m;j++)
            printf("%c",ch);
}