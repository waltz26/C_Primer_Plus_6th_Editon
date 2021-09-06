#include<stdio.h>
#include<stdlib.h>
#define ROW 20
#define COL 30

int abs(int n);

int main(void)
{
    FILE *fp;
    const char table[11]=" .':~*= %#";
    char pic[ROW][COL+1];
    int grey[ROW][COL];
    double avg;
    int i,j,pd,limit,temp;

    if ((fp=fopen("Ex12","r"))==NULL)
    {
        fprintf(stderr,"Can't open file Ex12\n");
        exit(EXIT_FAILURE);
    }
    for (i=0;i<ROW;i++)
        for (j=0;j<COL;j++)
            fscanf(fp,"%d",&grey[i][j]);
    for (i=0;i<ROW;i++)
        for (j=0;j<COL;j++)
        {
            limit=4;
            avg=0; pd=0;
            if (i!=0)
            {
                temp=abs(grey[i-1][j]-grey[i][j]);
                if (temp>1)
                    {avg+=temp; pd++;}
            }
            else limit--;
            if (j!=0)
            {
                temp=abs(grey[i][j-1]-grey[i][j]);
                if (temp>1)
                    {avg+=temp; pd++;}
            }
            else limit--;
            if (i!=ROW-1)
            {
                temp=abs(grey[i+1][j]-grey[i][j]);
                if (temp>1)
                    {avg+=temp; pd++;}
            }
            else limit--;
            if (j!=COL-1)
            {
                temp=abs(grey[i][j+1]-grey[i][j]);
                if (temp>1)
                    {avg+=temp; pd++;}
            }
            else limit--;

            if (pd==limit)
                grey[i][j]=(int)(avg/pd+0.5);
        }
    for (i=0;i<ROW;i++)
    {
        for (j=0;j<COL;j++)
            pic[i][j]=table[grey[i][j]];
        pic[i][COL]='\0';
    }
    for (i=0;i<ROW;i++)
        printf("%s\n",pic[i]);
    printf("Done!\n");

    return 0;
}
int abs(int n)
{
    return n>=0?n:-n;
}