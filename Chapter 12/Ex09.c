#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 256

int main(void)
{
    char **strv,*word;
    int i,n,l;

    printf("How many words do you wish to enter? ");
    scanf("%d",&n);
    strv=(char **)malloc(n*sizeof(char *));
    printf("Enter %d words now:\n",n);
    for (i=0;i<n;i++)
    {
        word=(char *)malloc(SIZE*sizeof(char));
        scanf("%s",word);
        l=strlen(word);
        strv[i]=(char *)malloc((l+1)*sizeof(char));
        strncpy(strv[i],word,l);
        strv[i][l]='\0';
        free(word);
    }
    printf("Here are you words:\n");
    for (i=0;i<n;i++)
    {
        printf("%s\n",strv[i]);
        free(strv[i]);    //记得要释放内存
    }
    free(strv);    //还要释放一次

    return 0;
}