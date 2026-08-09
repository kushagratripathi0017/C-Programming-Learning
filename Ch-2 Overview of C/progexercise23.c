// 1. Include the Standard Input Output library for the printf function
#include <stdio.h>

int main() 
{
    // 2. Declare an integer variable 'num' and set it to 5.
    // This is the number whose table we want to print.
    int num = 5; 

    // 3. Start a 'for' loop to repeat the printing action 10 times.
    // - int i = 1;  -> Starts our counter 'i' at 1.
    // - i <= 10;   -> Keeps the loop running as long as 'i' is less than or equal to 10.
    // - i++;       -> Post-increment operator. Bumps 'i' up by 1 at the end of each loop.
    for (int i = 1; i <= 10; i++) 
    {
        // 4. Print the current row of the table.
        // - The 1st %d gets replaced by 'num' (which stays 5).
        // - The 2nd %d gets replaced by 'i' (which changes from 1 to 10).
        // - The 3rd %d gets replaced by the calculated math result (num * i).
        // - \n jumps to a new line for the next row.
        printf("%d x %d = %d\n", num, i, num * i);
    }

    // 5. Signal to the operating system that the program finished successfully.
    return 0;
}