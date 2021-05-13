#include<stdio.h>
#include<ctype.h>
void add(void);
void subtract(void);
void multiply(void);
void divide();
char get_choice(void);
char get_first(void);
float get_float(void);

int main(void)
{
    int choice;


    while ((choice=get_choice())!='q')
    {
        switch (choice)
        {
            case 'a':
                add();
                break;
            case 'b':
                subtract();
                break;
            case 'c':
                multiply();
                break;
            case 'd':
                divide();
                break;
            default:
                printf("Program error!\n");
                break;
        }
    }

    printf("Bye.\n");
    return 0;
}

void add(void)
{
    float num1,num2;

    printf("Enter first number: ");
    num1=get_float();
    printf("Enter second number: ");
    num2=get_float();

    printf("%g + %g = %g\n",num1,num2,num1+num2);
}
void subtract(void)
{
    float num1,num2;

    printf("Enter first number: ");
    num1=get_float();
    printf("Enter second number: ");
    num2=get_float();

    printf("%g - %g = %g\n",num1,num2,num1-num2);
}
void multiply(void)
{
    float num1,num2;

    printf("Enter first number: ");
    num1=get_float();
    printf("Enter second number: ");
    num2=get_float();

    printf("%g * %g = %g\n",num1,num2,num1-num2);
}
void divide()
{
    float num1,num2;

    printf("Enter first number: ");
    num1=get_float();
    printf("Enter second number: ");
    while ((num2=get_float())==0)
        printf("Enter a number other than 0: ");

    printf("%g / %g = %g\n",num1,num2,num1/num2);
}
char get_choice(void)
{
    int ch;

    printf("Enter the operation of your choice:\n");
    printf("a. add          s. subtract \n");
    printf("m. multiply     d. divide\n");
    printf("q. quit\n");
    ch=get_first();
    while (ch!='a'&&ch!='s'&&ch!='m'&&ch!='d'&&ch!='q')
    {
        printf("Please respond with a, s, m, d, or q.\n");
        ch=get_first();
    }

    return ch;
}
char get_first(void)
{
    int ch;

    while (isspace(ch=getchar()))
        continue;
    while (getchar()!='\n')
        continue;

    return ch;
}
float get_float(void)
{
    float input;
    char ch;

    while (scanf("%f",&input)!=1)
    {
        while ((ch=getchar())!='\n')
            putchar(ch);
        printf(" is not a number.\n");
        printf("Please enter a number, such as 2.5, -1.78E8, or 3: ");
    }

    return input;
}