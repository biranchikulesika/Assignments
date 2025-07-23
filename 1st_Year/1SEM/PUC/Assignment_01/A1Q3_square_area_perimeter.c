/*
 *This C program calculates the area and perimeter of a square
 *based on the side entered by the user.
 *
 *Author: Biranchi Kulesika
 *Date: 2 Sep, 2023
 *Assignment No.: 01
 *Question No.: 03
 */

#include <stdio.h>

int main() {
  float side, perimeter;
  double area;

  printf("\n\nEnter the side of the square: ");
  scanf("%f", &side);

  perimeter = 4 * side;
  area = side * side;

  printf("\nSide of the square: %.2f units", side);
  printf("\nPerimeter = 4 x side = %.2f units", perimeter);
  printf("\nArea = side x side = %.2lf square units\n\n", area);

  return 0;
}
