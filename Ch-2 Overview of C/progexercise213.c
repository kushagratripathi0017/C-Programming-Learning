#include <stdio.h>
#include <math.h> // sqrtf() function use karne ke liye zaroori hai

int main() 
{
    // Variables declaration
    float D, x1, y1, x2, y2;

    // 1. User se coordinates ka input lena
    printf("Enter the value of x1:\n");
    scanf("%f", &x1);

    printf("Enter the value of y1:\n");
    scanf("%f", &y1);

    printf("Enter the value of x2:\n");
    scanf("%f", &x2);

    printf("Enter the value of y2:\n");
    scanf("%f", &y2);

    // 2. Distance Formula apply karna 
    // D = sqrt( (x2-x1)^2 + (y2-y1)^2 )
    D = sqrtf((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    // 3. Final answer screen par print karna
    // %.2f use karne se point ke baad sirf 2 digits dikhengi (e.g., 5.23)
    printf("\nThe distance D between the two points is: %.2f\n", D);

    return 0;
}
