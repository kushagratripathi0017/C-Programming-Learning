#include <stdio.h> // Includes the Standard Input Output library for printf and scanf

int main() {
    // Declare variables to store the distance, time, and the calculated speed
    // Using 'float' allows the program to handle decimal values (e.g., 12.5 km in 1.5 hours)
    float distance, time, speed;

    // Prompt the user to enter the distance travelled
    printf("Enter the distance travelled (e.g., in kilometers): ");
    // Read the user's input and store it in the 'distance' variable
    // '%f' is the format specifier for float, and '&' provides the memory address of the variable
    scanf("%f", &distance);

    // Prompt the user to enter the time taken
    printf("Enter the time taken (e.g., in hours): ");
    // Read the user's input and store it in the 'time' variable
    scanf("%f", &time);

    // Check for invalid input to prevent a mathematical error (division by zero)
    if (time <= 0) {
        printf("Error: Time must be greater than zero.\n");
    } else {
        // Calculate speed using the formula: Speed = Distance / Time
        speed = distance / time;

        // Display the calculated speed to the user
        // '%.2f' limits the output to 2 decimal places for a cleaner look
        printf("\nThe speed of the car is: %.2f units/hour\n", speed);
    }

    // Return 0 to indicate that the program executed successfully
    return 0;
}