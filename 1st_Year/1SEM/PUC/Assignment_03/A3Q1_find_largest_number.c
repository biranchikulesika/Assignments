/**
 * @file a3q1_find_largest_number.c
 * @author Biranchi Kulesika
 * @date 20 Sep 2023
 * @brief Finds the largest of three integer numbers.
 *
 * This program prompts the user to enter three integers and then
 * determines and displays the largest among them. It includes input
 * validation to ensure that valid integers are entered.
 */

#include <stdio.h>

int main()
{
  int num1, num2, num3, largest;

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

  largest = num1;
  if (num2 > largest)
  {
    largest = num2;
  }
  if (num3 > largest)
  {
    largest = num3;
  }

  printf("\n--- Comparison Result ---\n");
  printf("Entered numbers: %d, %d, and %d\n", num1, num2, num3);
  printf("The largest number is: %d\n", largest);
  printf("-------------------------\n\n");

  return 0;
}
