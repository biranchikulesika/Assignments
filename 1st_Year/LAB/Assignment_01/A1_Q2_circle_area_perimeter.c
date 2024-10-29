/*
This file contains the C code to find the perimeter and area of a circle based on the radius entered by the user.

File: circle_area_perimeter.c
Author: Biranchi Kulesika
Date: 2 Sep, 2023
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
