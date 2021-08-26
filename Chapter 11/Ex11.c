#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define NUM 10
#define SIZE 256

char *s_gets(char *s,int n);
void getlword(int lword[],const char s[][SIZE],int count);
void sortp2(char *p2[NUM],int count);
void sortp3(char *p3[NUM],int count);
void sortp4(char *p4[NUM],int lword[],int count);
void show(const char *p[NUM],int count);

int main(void)
{
    char s[NUM][SIZE];
    char *p1[NUM],*p2[NUM],*p3[NUM],*p4[NUM];    //分别为4个选项打印的字符串地址序列
    int lword[NUM];
    int i,option,count=0;

    printf("Enter ten strings in separate lines (each no more than 255 characters):\n");
    while (count<NUM&&s_gets(s[count],255))    //顺序不能更改
        count++;
    for (i=0;i<count;i++)
        p1[i]=p2[i]=p3[i]=p4[i]=s[i];

    getlword(lword,s,count);
    sortp2(p2,count);
    sortp3(p3,count);
    sortp4(p4,lword,count);

    while (1)
    {
        printf("----------------------------------------------\n");
        printf("How do you want to print these strings?\n");
        printf("1. Original.        2.ASCII order.\n");
        printf("3. Length order.    4.First Word length order.\n");
        printf("5. quit.\n");
        printf("----------------------------------------------\n");
        printf("choose an option: ");
        scanf("%d",&option);

        switch (option)
        {
            case 1:
                show(p1,count);
                break;
            case 2:
                show(p2,count);
                break;
            case 3:
                show(p3,count);
                break;
            case 4:
                show(p4,count);
                break;
            case 5:
                printf("Done!\n");
                return 0;
                break;
            default:
                printf("Error!\n");
                continue;
        }
    }

    return 0;
}
char *s_gets(char *s,int n)
{
    char *p;
    int i=0;

    p=fgets(s,n,stdin);
    if (p)
    {
        while (s[i]!='\n'&&s[i]!='\0')
            i++;
        if (s[i]=='\n')
            s[i]='\0';
        else
            while (getchar()!='\n')
                continue;
    }

    return p;
}
void getlword(int lword[],const char s[][SIZE],int count)
{
    int i,j,l,pd,k;    //pd判断是否在读单词

    for (i=0;i<count;i++)
    {
        l=strlen(s[i]);
        pd=0;
        k=0;

        for (j=0;j<l;j++)
        {
            if (pd)    //在读单词
                if (isspace(s[i][j]))
                    break;
                else k++;
            else
                if (isspace(s[i][j]))
                    continue;
                else {pd=1; k++;}
        }

        lword[i]=k;
        printf("%d--------%d\n",i+1,lword[i]);
    }
}
void sortp2(char *p2[NUM],int count)
{
    char *temp;
    int i,j;

    for (i=0;i<count;i++)
        for (j=i+1;j<count;j++)
            if (strcmp(p2[i],p2[j])>0)
            {
                temp=p2[j];
                p2[j]=p2[i];
                p2[i]=temp;
            }
}
void sortp3(char *p3[NUM],int count)
{
    char *temp;
    int i,j;

    for (i=0;i<count;i++)
        for (j=i+1;j<count;j++)
            if (strlen(p3[i])>strlen(p3[j]))
            {
                temp=p3[j];
                p3[j]=p3[i];
                p3[i]=temp;
            }
}
void sortp4(char *p4[NUM],int lword[],int count)
{
    char *temp1;
    int i,j,temp2;

    for (i=0;i<count;i++)
        for (j=i+1;j<count;j++)
            if (lword[i]>lword[j])
            {
                temp1=p4[j];
                p4[j]=p4[i];
                p4[i]=temp1;
                temp2=lword[j];
                lword[j]=lword[i];
                lword[i]=temp2;
            }
}
void show(const char *p[NUM],int count)
{
    int i;

    for (i=0;i<count;i++)
        printf("(%2d) %s\n",i+1,p[i]);
}