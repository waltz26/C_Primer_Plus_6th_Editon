#include<stdio.h>
#include<string.h>
int convert_bin(const char *s);

int main(void)
{
    char *pbin="01001001";
    int result;

    result=convert_bin(pbin);
    printf("Result: %d\n",result);

    return 0;
}
int convert_bin(const char *s)
{
    int ret=0;

    for (int i=0;s[i]!='\0';i++)
    {
        ret<<=1;
        ret+=s[i]-'0';
    }

    return ret;
}