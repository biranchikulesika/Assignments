/**
 * @file a2q3_quadratic_roots_finder.c
 * @author Biranchi Kulesika
 * @date 12 Sep, 2023
 * @brief Finds the real or complex roots of a quadratic equation.
 *
 * This program prompts the user to enter the coefficients (a, b, and c) of a
 * quadratic equation (ax^2 + bx + c = 0). It then calculates and displays
 * the roots. The program validates that 'a' is not zero and that all inputs
 * are valid numbers. It correctly handles cases for two distinct real roots,
 * one real root, and complex roots.
 */

#include <math.h>
#include <stdio.h>

int main()
{
  double a, b, c;
  double discriminant, root1, root2, real_part, imaginary_part;

  printf("Enter the coefficients for the quadratic equation (ax^2 + bx + c = 0):\n");

  while (1)
  {
    printf("Enter coefficient a: ");
    if (scanf("%lf", &a) != 1)
    {
      printf("Invalid input. Please enter a valid number.\n");
      while (getchar() != '\n')
        ;
      continue;
    }
    if (a != 0.0)
    {
      break;
    }
    printf("Coefficient 'a' cannot be zero for a quadratic equation. Please try again.\n");
  }

  printf("Enter coefficient b: ");
  if (scanf("%lf", &b) != 1)
  {
    printf("Invalid input. Please enter a valid number for b.\n");
    return 1;
  }

  printf("Enter coefficient c: ");
  if (scanf("%lf", &c) != 1)
  {
    printf("Invalid input. Please enter a valid number for c.\n");
    return 1;
  }

  printf("\n--- Quadratic Equation Roots ---\n");
  printf("Equation: %.2lfx^2 + %.2lfx + %.2lf = 0\n", a, b, c);

  discriminant = b * b - 4 * a * c;

  if (discriminant > 0)
  {
    root1 = (-b + sqrt(discriminant)) / (2 * a);
    root2 = (-b - sqrt(discriminant)) / (2 * a);
    printf("Result: Two distinct real roots.\n");
    printf("Root 1: %.2lf\n", root1);
    printf("Root 2: %.2lf\n", root2);
  }
  else if (discriminant == 0)
  {
    root1 = -b / (2 * a);
    printf("Result: Two equal real roots.\n");
    printf("Root:   %.2lf\n", root1);
  }
  else
  {
    real_part = -b / (2 * a);
    imaginary_part = sqrt(-discriminant) / (2 * a);
    printf("Result: Two complex roots.\n");
    printf("Root 1: %.2lf + %.2lfi\n", real_part, imaginary_part);
    printf("Root 2: %.2lf - %.2lfi\n", real_part, imaginary_part);
  }
  printf("--------------------------------\n\n");

  return 0;
}
