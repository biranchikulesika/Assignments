/*
* Description: This C program calculates the area and perimeter of a circle
* based on the radius entered by the user.
* Author: Biranchi Kulesika
* Date: 2 Sep, 2023
* Assignment No.: 01
* Question No.: 02
*/

#include <stdio.h>
#include <math.h>

int main() {
    double radius;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    printf("\nRadius: %.2lf units\n", radius);
    printf("Circumference: %.2lf units\n", 2 * M_PI * radius);
    printf("Area: %.2lf square units\n", M_PI * radius * radius);

    return 0;
}
