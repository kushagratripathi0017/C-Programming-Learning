#include<stdio.h>
#include<math.h>

int main()

{
    float area,S,a,b,c;
    printf("Enter the three sides of triangle:\n");
    scanf("%f %f %f", &a, &b , &c);

    S=(a+b+c)/2.0 ;
    area = sqrt(S*(S-a)*(S-b)*(S-c));

    printf("The area of the triangle is = %f\n",area);

    return 0;
}