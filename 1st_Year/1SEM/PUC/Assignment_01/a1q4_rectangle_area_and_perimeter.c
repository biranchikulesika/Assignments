/*
* Description: This C program calculates the area and perimeter of a rectangle
* based on the length and breadth entered by the user.
* Author: Biranchi Kulesika
* Date: 2 Sep, 2023
* Assignment No.: 01
* Question No.: 04
*/

#include <stdio.h>

int main() {
    double length, breadth;

    printf("Enter the length of the Rectangle: ");
    scanf("%lf", &length);

    printf("Enter the breadth of the Rectangle: ");
    scanf("%lf", &breadth);

    printf("\nLength: %.2lf, Breadth: %.2lf\n", length, breadth);
    printf("Perimeter = 2 * (%.2lf + %.2lf) = %.2lf units\n", length, breadth, 2 * (length + breadth));
    printf("Area = %.2lf * %.2lf = %.2lf square units\n", length, breadth, length * breadth);

    return 0;
}
