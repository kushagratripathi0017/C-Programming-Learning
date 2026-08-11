#include <stdio.h>

int main()
{
    
    float num , square ;

    printf("Enter a integer: ");
    scanf("%f", &num);

    square = num * num ;

    printf("The square of %.2f is %.2f ", num , square );

    return 0 ;
}