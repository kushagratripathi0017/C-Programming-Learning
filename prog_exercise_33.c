// Include standard input-output header to use I/O functions like printf and scanf
#include <stdio.h>

// Entry point of every C program
int main() {
    // Declare an integer variable to temporarily store each number entered by the user
    int num;

    // Declare and initialize a counter for positive numbers to 0 (prevents garbage values)
    int positive_count = 0;

    // Declare and initialize a counter for negative numbers to 0
    int negative_count = 0;

    // Display user instructions on screen
    printf("Enter numbers separated by spaces or newlines (enter 0 to stop):\n");

    // 'while (1)' creates a loop that runs continuously because 1 evaluates to TRUE
    while (1) {
        // Read the integer typed by the user and store it at the memory address of 'num' (&num)
        scanf("%d", &num);

        // Check if the user entered 0 (the stop signal)
        if (num == 0) {
            // 'break' immediately stops and exits the while loop
            break;
        }

        // Check if the entered number is greater than 0
        if (num > 0) {
            // Increment the positive count by 1 (same as: positive_count = positive_count + 1)
            positive_count++;
        } 
        // If 'num > 0' is false (and since num is not 0), it must be a negative number
        else {
            // Increment the negative count by 1
            negative_count++;
        }
    }

    // Print a section header for the output
    printf("\n--- Summary ---\n");

    // Output the total number of positive values (%d is replaced by positive_count)
    printf("Positive numbers count: %d\n", positive_count);

    // Output the total number of negative values (%d is replaced by negative_count)
    printf("Negative numbers count: %d\n", negative_count);

    // Return 0 to tell the operating system that the program ran successfully
    return 0;
}