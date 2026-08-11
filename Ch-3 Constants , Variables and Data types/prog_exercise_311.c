#include <stdio.h>
int main()
{
    float distance , mileage , fuel ;

    printf("Enter total distance (in km) :  ") ;
    scanf(" %f", &distance);

    printf("Enter total fuel consumed (in litres) ");
    scanf(" %f", &fuel); 

    if (fuel <=0)
    { 
        printf("Error: Fuel consumed must be greater than zero. \n");
        return 1;

    }

    mileage = distance/fuel;

    printf("Mileage of the car: %.2f km/l\n" , mileage);

    return 0;
}