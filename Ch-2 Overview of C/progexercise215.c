#include<stdio.h>
#include<math.h>

int main()
{
    float x1= 2 , y1 = 2;
    float x2= 5 , y2 = 6;
    float diameter, radius,  area;
    float pi = 3.14;

    diameter =  sqrtf((x2-x1)*(x2-x1) + (y2-y1) * (y2-y1));
    radius = diameter/ 2.0 ;
    area = pi*radius*radius ;

    printf("Diameter:%.2f\n" ,diameter);
    printf("Radius:%.2f\n", radius);
    printf("Area:%.2f\n", area);

    return 0 ;

}