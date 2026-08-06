#include <stdio.h>

int main() {
    // Declare float variables to store prices with decimals
    float price_rice, price_sugar;

    // Get prices from the user
    printf("Enter the price of 1 kg rice: ");
    scanf("%f", &price_rice);

    printf("Enter the price of 1 kg sugar: ");
    scanf("%f", &price_sugar);

    // Display the formatted list
    printf("\nLIST OF ITEMS\n\n");
    printf("ITEM      PRICE\n");
    printf("Rice       Rs %.2f\n", price_rice);
    printf("Sugar    Rs %.2f\n", price_sugar);

    return 0;
}