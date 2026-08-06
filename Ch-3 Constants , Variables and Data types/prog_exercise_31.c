// Include the standard input-output header file so we can use printf and scanf
#include <stdio.h>

// The main function where program execution begins
int main() {
    // Declare integer variables:
    // 'n' will store the limit entered by the user
    // 'i' will serve as the loop counter
    int n, i;

    // Declare 'sum' as a double to hold decimal values, and initialize it to 0.0
    // Initializing is crucial so we don't add terms to a random garbage value
    double sum = 0.0;

    // Ask the user to enter a value for n
    printf("Enter the value of n: ");

    // Read the integer typed by the user and store it in the memory address of 'n' (&n)
    scanf("%d", &n);

    // Input Validation: Check if the user entered 0 or a negative number
    // Since division by zero (1/0) is undefined, n must be at least 1
    if (n <= 0) {
        // Inform the user that the input is invalid
        printf("Please enter a positive integer greater than 0.\n");
        
        // Return 1 to indicate that the program ended due to an error
        return 1;
    }

    // Start a loop that runs from i = 1 up to i = n
    // In each iteration, 'i' increases by 1 (i++)
    for (i = 1; i <= n; i++) {
        // Add the current term (1.0 / i) to the running sum
        // CRITICAL: Writing '1.0' instead of '1' forces C to perform floating-point division
        // If we used '1 / i', C would do integer division (e.g., 1 / 2 would result in 0)
        sum += 1.0 / i; 
    }

    // Print the final result:
    // %d is replaced by 'n'
    // %.4f is replaced by 'sum', formatted to 4 decimal places
    printf("Sum of the series up to 1/%d = %.4f\n", n, sum);

    // Return 0 to signal to the operating system that the program executed successfully
    return 0;
}