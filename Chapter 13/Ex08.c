#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
    FILE *fp;
    char ch;
    int count;

    if (argc<2)
    {
        fprintf(stderr,"Usage: %s character file_name1 file_name2 ...\n",argv[0]);
        exit(0);
    }
    else if (argc<3)
    {
        count=0;
        printf("Enter the text:\n");
        while ((ch=getchar())!=EOF)
            if (ch==argv[1][0])
                count++;
        printf("Number of occurrences of the character '%c':%d\n",argv[1][0],count);
    }
    else
    {
        for (int i=2;i<argc;i++)
        {
            count=0;
            if ((fp=fopen(argv[i],"r"))==NULL)
            {
                fprintf(stderr,"Can't open file %s",argv[i]);
                exit(EXIT_FAILURE);
            }
            while ((ch=getc(fp))!=EOF)
                if (ch==argv[1][0])
                    count++;
            printf("Number of occurrences of the character '%c' in file %s:%d\n",
                argv[1][0],argv[i],count);
        }
    }
    printf("Done!\n");

    return 0;
}