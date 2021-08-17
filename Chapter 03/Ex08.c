//思考：当然是浮点类型最为合适。1品脱等于2杯，那么1杯就是0.5品脱，显然整数类型是无法表示的。
//并且使用浮点类型更适合实际情况，因为杯数在实际生活中经常是浮点数。
//下面是一个例子程序
#include<stdio.h>
int main(void)
{
    float cup;

    printf("Enter the number of cups: ");
    scanf("%f",&cup);
    printf("%.2f cup(s)=%.2f pint(s)=%.2f ounce(s)=%.2f tablespoon(s)=%.2f teaspoon(s)\n",cup,0.5*cup,8.0*cup,16*cup,48*cup);

    return 0;
}