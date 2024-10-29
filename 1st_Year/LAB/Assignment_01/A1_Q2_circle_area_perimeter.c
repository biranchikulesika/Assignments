/*
*This C program calculates the area and perimeter of a circle
*based on the radius entered by the user.
*
*Author: Biranchi Kulesika
*Date: 2 Sep, 2023
*Assignment No.: 01
*Question No.: 02
*/

#include <stdio.h>
#include <math.h>

int main()
{
    double radius, circumference, area;

    printf("\n\nEnter the radius of the circle: ");
    scanf("%lf", &radius);

    circumference = 2 * M_PI * radius; // M_PI is a predefined constant in <math.h>
    area = M_PI * radius * radius;

    printf("\n\nRadius: %.2lf units", radius);
    printf("\nCircumference: %.2lf units", circumference);
    printf("\nArea: %.2lf square units\n\n", area);

    return 0;
}
