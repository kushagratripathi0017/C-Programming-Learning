#include <stdio.h>

int main() {
    float num1, num2, result;

    // Prompt user for input
    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    // Check for division by zero
    if (num2 == 0) {
        printf("\nError: Division by zero is not allowed.\n");
    } else {
        result = num1 / num2;
        // Display result formatted to 2 decimal places
        printf("\n%.2f divided by %.2f = %.2f\n", num1, num2, result);
    }

    return 0;
}