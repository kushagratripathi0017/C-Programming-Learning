#include <stdio.h>

int main()
{
    // Use float so we don't lose the decimal places in the division
    float a = 250;
    float b = 85;
    float c = 25;
    float X; // Variable to store the mathematical answer

    // Perform the actual calculation with parentheses
    X = a / (b - c);

    // Print the final calculated value of X instead of just the numbers
    // %.2f shows the result nicely with 2 decimal digits
    printf("The value of X is: %.2f\n", X);

    return 0;
}