/*
 *This C program finds the roots of the quadratic equation ax^2 + bx + c = 0,
 *where a, b and are given as run-time input.
 *
 *Author: Biranchi Kulesika
 *Date: 12 Sep, 2023
 *Assignment No.: 02
 *Question No.: 03
 */

#include <math.h>
#include <stdio.h>

int main() {
  double a, b, c;
  double discriminant, root1, root2;

  printf("\n\nEnter the value of coefficients:");

  while (1) {
    printf("\na = ");
    scanf("%lf", &a);
    if (a != 0) {
      break;
    }
    printf("Coefficient 'a' cannot be zero. \nPlease enter again.");
  }

  printf("b = ");
  scanf("%lf", &b);
  printf("c = ");
  scanf("%lf", &c);

  printf("\nThe entered values are a = %.2lf, b = %.2lf, and c = %.2lf", a, b, c);

  discriminant = b * b - 4 * a * c;

  if (discriminant > 0) {
    // Two distinct real roots
    root1 = (-b + sqrt(discriminant)) / (2 * a);
    root2 = (-b - sqrt(discriminant)) / (2 * a);
    printf("\n\nRoots are real and different.");
    printf("\nRoot 1 = %.2lf", root1);
    printf("\nRoot 2 = %.2lf\n\n", root2);
  } else if (discriminant == 0) {
    // One real root
    root1 = -b / (2 * a);
    printf("\n\nRoots are real and the same.");
    printf("\nRoot = %.2lf\n\n", root1);
  } else {
    // No real roots exists
    printf("\n\nNo real roots exist.\n\n");
  }

  return 0;
}
