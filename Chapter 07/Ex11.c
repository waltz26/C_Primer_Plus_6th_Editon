#include<stdio.h>
#include<math.h>
#define selling_price_a 2.05
#define selling_price_b 1.15
#define selling_price_c 1.09
#define discount_line 100
#define discount_rate 0.05
#define weight_line_1 5
#define weight_line_2 20
#define weight_fee_1 6.5
#define weight_fee_2 14
#define weight_extra_fee 0.5

int main()
{
    int pound;
    char command[2];
    int pound_total,pound_a=0,pound_b=0,pound_c=0;
    float cost_total,cost_discount,cost_weight,cost_a=0,cost_b=0,cost_c=0;


    printf("******************************************************\n");
    printf("Please select the items to be purchased:\n");
    printf("a) Artichoke                     b) Beet\n");
    printf("c) Carrot                        q) Quit\n");
    printf("After exiting the order, we will send you the receipt.\n");
    printf("******************************************************\n");

    while (1)
    {
        in:
        printf("Choose an option and press enter: ");
        scanf("%s",command);

        switch (command[0])
        {
            case 'a':
                printf("Enter the number of pounds of artichokes: ");
                scanf("%d",&pound);
                pound_a+=pound;
                cost_a=selling_price_a*pound_a;
                break;
            case 'b':
                printf("Enter the number of pounds of beets: ");
                scanf("%d",&pound);
                pound_b+=pound;
                cost_b=selling_price_b*pound_b;
                break;
            case 'c':
                printf("Enter the number of pounds of carrots: ");
                scanf("%d",&pound);
                pound_c+=pound;
                cost_c=selling_price_c*pound_c;
                break;
            case 'q':
                printf("Please wait......\n");
                goto out;
            default:
                printf("ERROR!\n");
                goto in;
        }
    }

    out:
    cost_total=cost_a+cost_b+cost_c;
    if (cost_total>=discount_line)
        cost_discount=cost_total*discount_rate;

    pound_total=pound_a+pound_b+pound_c;
    if (pound_total<=weight_line_1)
       cost_weight=weight_fee_1;
    else if (pound_total<=weight_line_2)
        cost_weight=weight_fee_2;
    else cost_weight=weight_fee_2+ceil(pound_total-weight_line_2)*weight_extra_fee;

    printf("Here's your receipt:\n\n");
    printf("-----------------------------------------------------------------------------------\n");
    printf("|                                                                                 |\n");
    printf("|                                    RECEIPT                                      |\n");
    printf("|                                                                                 |\n");
    printf("|                Item price($)   Ordered weight(pound(s))   Subscription fee($)   |\n");
    printf("|   Artichoke       %-10.2f      %-21d      %-16.2f   |\n",selling_price_a,pound_a,cost_a);
    printf("|   Beet            %-10.2f      %-21d      %-16.2f   |\n",selling_price_b,pound_b,cost_b);
    printf("|   Carrot          %-10.2f      %-21d      %-16.2f   |\n",selling_price_c,pound_c,cost_c);
    printf("|   Total                           %-21d      %-16.2f   |\n",pound_total,cost_total);
    printf("|                                                                                 |\n");
    printf("|        discount($)=%-10.2f      Shipping and packaging fees($)=%-10.2f    |\n",cost_discount,cost_weight);
    printf("|                                                  total=%-10.2f               |\n",cost_total-cost_discount+cost_weight);
    printf("|                                                                                 |\n");
    printf("-----------------------------------------------------------------------------------\n");

    return 0;
}