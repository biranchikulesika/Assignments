/**
 * @file a1q3_square_area_perimeter_calculator.c
 * @author Biranchi Kulesika
 * @date 2 Sep, 2023
 * @brief Calculates the area and perimeter of a square.
 *
 * This program prompts the user to enter the side length of a square,
 * then calculates and displays its area and perimeter. It includes input
 * validation to ensure the side length is a positive number.
 */

#include <stdio.h>

double calculate_square_area(double side)
{
  return side * side;
}

double calculate_square_perimeter(double side)
{
  return 4 * side;
}

int main()
{
  double side, perimeter, area;

  printf("Enter the side length of the square: ");

  if (scanf("%lf", &side) != 1)
  {
    printf("Invalid input. Please enter a valid number.\n");
    return 1;
  }

  if (side <= 0)
  {
    printf("The side length must be a positive number.\n");
    return 1;
  }

  perimeter = calculate_square_perimeter(side);
  area = calculate_square_area(side);

  printf("\n--- Square Properties ---\n");
  printf("Side Length: %.2f units\n", side);
  printf("Perimeter:   %.2f units\n", perimeter);
  printf("Area:        %.2f square units\n", area);
  printf("-----------------------\n\n");

  return 0;
}
