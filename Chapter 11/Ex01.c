#include<stdio.h>
#define SIZE 256

void get_nchar(char *s,int n);

int main(void)
{
    char s[SIZE];
    int n;

    printf("Enter the number of characters you want to read (no more than 255): ");
    scanf("%d%*c",&n);
    printf("Enter your content (contain at least %d characters):\n",n);
    get_nchar(s,n);
    printf("The contents of the array 's':\n%s",s);

    return 0;
}
void get_nchar(char *s,int n)
{
    char ch;
    int count=0;

    while (count<n)
    {
        ch=getchar();
        if (ch!=EOF)
            s[count++]=ch;
        else
        {
            printf("Reach End-of-File.\n");
            break;
        }
    }
    s[count]='\0';
}