/**
 * @file a1q1_arithmetic_operations.c
 * @author Biranchi Kulesika
 * @date 2 Sep, 2023
 * @brief A C program to perform basic arithmetic operations (addition,
 * subtraction, multiplication, and division) on two integers.
 *
 * This program prompts the user to enter two integers, then calculates and
 * displays their sum, difference, product, and quotient. It also handles
 * division by zero.
 */

#include <stdio.h>

int main()
{
  int num1, num2;

  printf("Enter the first integer: ");
  if (scanf("%d", &num1) != 1)
  {
    printf("Invalid input. Please enter a valid integer.\n");
    return 1;
  }

  printf("Enter the second integer: ");
  if (scanf("%d", &num2) != 1)
  {
    printf("Invalid input. Please enter a valid integer.\n");
    return 1;
  }

  printf("\n--- Arithmetic Operations for %d and %d ---\n", num1, num2);
  printf("%-12s: %d + %d = %d\n", "Sum", num1, num2, num1 + num2);
  printf("%-12s: %d - %d = %d\n", "Difference", num1, num2, num1 - num2);
  printf("%-12s: %d * %d = %d\n", "Product", num1, num2, num1 * num2);

  if (num2 != 0)
  {
    printf("%-12s: %d / %d\n", "Division", num1, num2);
    printf("%14s  %-9s: %.2f\n", "", "Quotient", (double)num1 / num2);
    printf("%14s  %-9s: %d\n", "", "Remainder", num1 % num2);
  }
  else
  {
    printf("%-12s: Division by zero is not allowed.\n", "Division");
  }
  printf("------------------------------------------\n\n");

  return 0;
}