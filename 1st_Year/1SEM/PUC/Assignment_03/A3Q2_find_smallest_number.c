/**
 * @file a3q2_find_smallest_number.c
 * @author Biranchi Kulesika
 * @date 20 Sep 2023
 * @brief Finds the smallest of three integer numbers.
 *
 * This program prompts the user to enter three integers and then
 * determines and displays the smallest among them. It includes input
 * validation to ensure that valid integers are entered.
 */

#include <stdio.h>

int main()
{
  int num1, num2, num3, smallest;

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

  printf("Enter the third integer: ");
  if (scanf("%d", &num3) != 1)
  {
    printf("Invalid input. Please enter a valid integer.\n");
    return 1;
  }

  smallest = num1;
  if (num2 < smallest)
  {
    smallest = num2;
  }
  if (num3 < smallest)
  {
    smallest = num3;
  }

  printf("\n--- Comparison Result ---\n");
  printf("Entered numbers: %d, %d, and %d\n", num1, num2, num3);
  printf("The smallest number is: %d\n", smallest);
  printf("-------------------------\n\n");

  return 0;
}
