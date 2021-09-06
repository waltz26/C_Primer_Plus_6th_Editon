#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 41

int main(void)
{
    FILE *fp;
    char words[MAX];
    int count=0;

    if ((fp=fopen("wordy","a+"))==NULL)
    {
        fprintf(stdout,"Can't open \"wordy\" file.\n");
        exit(EXIT_FAILURE);
    }
    rewind(fp);
    while (fscanf(fp,"%d%s",&count,words)==2)
        continue;
    puts("Enter words to add to the file; press the #");
    puts("key at the begining of a line to terminate.");
    while ((fscanf(stdin,"%40s",words)==1)&&(words[0]!='#'))
        fprintf(fp,"%d %s\n",++count,words);

    puts("File contents:");
    rewind(fp);
    while (fscanf(fp,"%d%s",&count,words)==2)
        printf("%d %s\n",count,words);
    puts("Done!");
    if (fclose(fp)!=0)
        fprintf(stderr,"Error closing file\n");

    return 0;
}