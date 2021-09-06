#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    FILE *fp;
    const char table[11]=" .':~*= %#";
    int row=20,col=30;
    int i,j;

    char pic[row][col+1];
    int grey[row][col];

    if ((fp=fopen("Ex12","r"))==NULL)
    {
        fprintf(stderr,"Can't open file Ex12\n");
        exit(EXIT_FAILURE);
    }
    for (i=0;i<row;i++)
        for (j=0;j<col;j++)
            fscanf(fp,"%d",&grey[i][j]);
    for (i=0;i<row;i++)
    {
        for (j=0;j<col;j++)
            pic[i][j]=table[grey[i][j]];
        pic[i][col]='\0';
    }
    for (i=0;i<row;i++)
        printf("%s\n",pic[i]);
    printf("Done!\n");

    return 0;
}