#include<stdio.h>
#include<stdlib.h>
#define ROW 20
#define COL 30

int main(void)
{
    FILE *fp;
    const char table[11]=" .':~*= %#";
    char pic[ROW][COL+1];
    int grey[ROW][COL];
    int i,j;

    if ((fp=fopen("Ex12","r"))==NULL)
    {
        fprintf(stderr,"Can't open file Ex12\n");
        exit(EXIT_FAILURE);
    }
    for (i=0;i<ROW;i++)
        for (j=0;j<COL;j++)
            fscanf(fp,"%d",&grey[i][j]);
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