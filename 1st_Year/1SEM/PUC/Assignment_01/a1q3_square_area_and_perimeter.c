/*
* Description: This C program calculates the area and perimeter of a square
* based on the side entered by the user.
* Author: Biranchi Kulesika
* Date: 2 Sep, 2023
* Assignment No.: 01
* Question No.: 03
*/

#include <stdio.h>

int main() {
    float side;

    printf("Enter the side of the square: ");
    scanf("%f", &side);

    printf("\nSide of the square: %.2f units\n", side);
    printf("Perimeter = 4 * %.2f = %.2f units\n", side, 4 * side);
    printf("Area = %.2f * %.2f = %.2f square units\n", side, side, side * side);

    return 0;
}
