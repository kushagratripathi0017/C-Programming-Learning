#include <stdio.h>

/* Function: add
   Description: Takes two integer inputs, adds them together, 
                and returns the total sum.
*/
int add(int num1, int num2) {
    return num1 + num2; // Performs addition and sends the result back
}

/* Function: sub
   Description: Takes two integer inputs, subtracts the second from the first, 
                and returns the remaining difference.
*/
int sub(int num1, int num2) {
    return num1 - num2; // Performs subtraction and sends the result back
}

int main() {
    // Initialize the two given integers as variables 'a' and 'b'
    int a = 20;
    int b = 10;
    
    // Declare variables to hold the answers sent back by our functions
    int sum_result;
    int sub_result;

    /* 1. Call the add() function.
       2. Pass the values of 'a' (20) and 'b' (10) into it.
       3. Store the returned answer (30) inside 'sum_result'.
    */
    sum_result = add(a, b);

    /* 1. Call the sub() function.
       2. Pass the values of 'a' (20) and 'b' (10) into it.
       3. Store the returned answer (10) inside 'sub_result'.
    */
    sub_result = sub(a, b);

    // Print the addition result formatted exactly as "20 + 10 = 30"
    printf("%d + %d = %d\n", a, b, sum_result);
    
    // Print the subtraction result formatted exactly as "20 - 10 = 10"
    printf("%d - %d = %d\n", a, b, sub_result);

    // Return 0 to tell the system that the program ran successfully without errors
    return 0;
}