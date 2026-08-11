#include<stdio.h>
#define GST_RATE 0.18

int main()
{
    float base_total , tax_amount , price , final_bill ;
    int quantity ;

    printf("Enter item price: ");
    scanf("%f", &price);

    printf("Enter item quantity: ");
    scanf("%d", &quantity) ;

    base_total = price * quantity;
    tax_amount = base_total * GST_RATE;
    final_bill = base_total + tax_amount;

    printf("\nBase Total: %.2f\n", base_total);
    printf("Tax (18%% GST): %.2f\n", tax_amount);
    printf("Final Bill: %.2f\n", final_bill);

    return 0;
}