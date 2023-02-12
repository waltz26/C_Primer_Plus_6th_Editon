#include<stdio.h>
#include<string.h>
#define MAX_SHOW_BIT 32

unsigned int convert_bin(const char *s);
void to_string_bin(char *s,unsigned int n);

int main(int argc,char **argv)
{
    char ans[MAX_SHOW_BIT+1];
    unsigned int c1,c2;

    if (argc!=3)
    {
        printf("Error!\n");
        return 0;
    }

    int show_bit=strlen(argv[1]);

    c1=convert_bin(argv[1]);
    c2=convert_bin(argv[2]);

    to_string_bin(ans,~c1);
    printf("~ %s = %s\n",argv[1],ans+MAX_SHOW_BIT-show_bit);
    to_string_bin(ans,~c2);
    printf("~ %s = %s\n",argv[2],ans+MAX_SHOW_BIT-show_bit);

    to_string_bin(ans,c1&c2);
    printf("%s & %s = %s\n",argv[1],argv[2],ans+MAX_SHOW_BIT-show_bit);

    to_string_bin(ans,c1|c2);
    printf("%s | %s = %s\n",argv[1],argv[2],ans+MAX_SHOW_BIT-show_bit);

    to_string_bin(ans,c1^c2);
    printf("%s ^ %s = %s\r\n",argv[1],argv[2],ans+MAX_SHOW_BIT-show_bit);

    return 0;
}
unsigned int convert_bin(const char *s)
{
    unsigned int ret=0;

    for (int i=0;s[i]!='\0';i++)
    {
        ret<<=1;
        ret+=s[i]-'0';
    }

    return ret;
}
void to_string_bin(char *s,unsigned int n)
{
    int cnt=0;

    while (n)
    {
        s[MAX_SHOW_BIT-++cnt]='0'+n%2;
        n/=2;
    }

    for (int i=0,j=cnt;j<MAX_SHOW_BIT;i++,j++)
        s[i]='0';

    s[MAX_SHOW_BIT]='\0';
}