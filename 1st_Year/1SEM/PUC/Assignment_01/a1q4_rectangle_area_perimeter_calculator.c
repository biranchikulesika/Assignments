/**
 * @file a1q4_rectangle_area_perimeter_calculator.c
 * @author Biranchi Kulesika
 * @date 2 Sep, 2023
 * @brief Calculates the area and perimeter of a rectangle.
 *
 * This program prompts the user to enter the length and breadth of a
 * rectangle, then calculates and displays its area and perimeter. It includes
 * input validation to ensure the dimensions are positive numbers.
 */

#include <stdio.h>

double calculate_rectangle_area(double length, double breadth)
{
  return length * breadth;
}

double calculate_rectangle_perimeter(double length, double breadth)
{
  return 2 * (length + breadth);
}

int main()
{
  double length, breadth, perimeter, area;

  printf("Enter the length of the rectangle: ");
  if (scanf("%lf", &length) != 1)
  {
    printf("Invalid input. Please enter a valid number.\n");
    return 1;
  }

  if (length <= 0)
  {
    printf("The length must be a positive number.\n");
    return 1;
  }

  printf("Enter the breadth of the rectangle: ");
  if (scanf("%lf", &breadth) != 1)
  {
    printf("Invalid input. Please enter a valid number.\n");
    return 1;
  }

  if (breadth <= 0)
  {
    printf("The breadth must be a positive number.\n");
    return 1;
  }

  perimeter = calculate_rectangle_perimeter(length, breadth);
  area = calculate_rectangle_area(length, breadth);

  printf("\n--- Rectangle Properties ---\n");
  printf("Length    : %.2f units\n", length);
  printf("Breadth   : %.2f units\n", breadth);
  printf("Perimeter : %.2f units\n", perimeter);
  printf("Area      : %.2f square units\n", area);
  printf("--------------------------\n\n");

  return 0;
}
