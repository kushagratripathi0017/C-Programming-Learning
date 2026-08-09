#include <stdio.h>

int main() {
    // Declare variables using different data types
    char name[50];
    int age;
    float average_marks;

    // Input student details
    printf("Enter student's name: ");
    // %[^\n] lets us read full names with spaces
    scanf(" %[^\n]", name);

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter average marks: ");
    scanf("%f", &average_marks);

    // Print student details
    printf("\n--- Student Details ---\n");
    printf("Name:          %s\n", name);
    printf("Age:           %d years\n", age);
    printf("Average Marks: %.2f\n", average_marks);

    return 0;
}