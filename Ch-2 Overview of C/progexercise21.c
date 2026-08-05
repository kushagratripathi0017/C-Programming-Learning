// 1. #include tells the compiler to look for a standard library file.
// <stdio.h> stands for Standard Input Output. It allows us to use printf().
#include <stdio.h>

// 2. int main() is the starting point of the program. 
// Every C program must have a main function. It returns an integer (int).
int main() 
{
    // { starts the body of the main function.

    // 3. Declare integer variables (int) and assign values to them.
    // Remember, every instruction statement in C must end with a semicolon (;).
    int a = 5;   // 'a' stores the number 5
    int b = 8;   // 'b' stores the number 8
    int c = 18;  // 'c' stores the number 18

    // 4. printf() prints text to the screen.
    // %d is a format specifier (placeholder) for integers.
    // The variables a, b, and c will replace the three %d markers in order.
    // \n is the newline character that moves the cursor to the next line.
    printf("%dx + %dy = %d\n", a, b, c);

    // 5. return 0 tells the operating system that the program
    // finished running successfully without any errors.
    return 0;
}
// } ends the body of the main function.