#include <stdio.h>
#include <math.h> // Required for sqrt() function

int main() {
    float a, b, c;
    float discriminant, root1, root2, realPart, imagPart;

    // 1. Input coefficients a, b, and c
    printf("Enter coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

    // 2. Calculate the Discriminant (b^2 - 4ac)
    discriminant = (b * b) - (4 * a * c);

    // 3. Check the 3 cases using simple if-else

    // CASE 1: Real and Different Roots (D > 0)
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        
        printf("Roots are real and different:\n");
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    }
    // CASE 2: Real and Equal Roots (D == 0)
    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        
        printf("Roots are real and equal:\n");
        printf("Root 1 = Root 2 = %.2f\n", root1);
    }
    // CASE 3: Imaginary / Complex Roots (D < 0)
    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a); // -discriminant makes it positive for sqrt
        
        printf("Roots are complex/imaginary:\n");
        printf("Root 1 = %.2f + %.2fi\n", realPart, imagPart);
        printf("Root 2 = %.2f - %.2fi\n", realPart, imagPart);
    }

    return 0;
}
