#include<stdio.h>
#include<ctype.h>
#define SIZE 256

int main(int argc,char *argv[])
{
    char s[SIZE];
    char ch;
    int count=0;

    printf("Enter your content (no more than 255 characters):\n");
    while ((ch=getchar())!=EOF)
    {

        if (argc<2||argv[1][1]=='p')
            s[count++]=ch;
        else if (isalpha(ch))
        {
            if (argv[1][1]=='u')
                s[count++]=toupper(ch);
            else if (argv[1][1]=='l')
                s[count++]=tolower(ch);
            else {printf("Error argument!\n"); break;}
        }
        else s[count++]=ch;
    }
    s[count]='\0';    //别忘了空字符
    printf("The final content:\n%s\n",s);

    return 0;
}