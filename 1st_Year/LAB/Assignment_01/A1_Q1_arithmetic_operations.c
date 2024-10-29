/*
*This C program performs the four basic arithmetic operations
*such as addition, subtraction, multiplication, and division
*
*Author: Biranchi Kulesika
*Date: 2 Sep, 2023
*Assignment No.: 01
*Question No.: 01
*/

#include <stdio.h>

int main() {
  int num1, num2;
  int sum, difference, product, quotient, remainder;

  printf("\nEnter the first integer: ");
  scanf("%d", &num1);

  printf("Enter the second integer: ");
  scanf("%d", &num2);

  printf("\nThe entered numbers are %d and %d.", num1, num2);

  sum = num1 + num2;
  difference = num1 - num2;
  product = num1 * num2;

  printf("\n\nSum = %d + %d = %d", num1, num2, sum);
  printf("\nDifference = %d - %d = %d", num1, num2, difference);
  printf("\nProduct = %d x %d = %d", num1, num2, product);

  if (num1 > num2) {
    quotient = num1 / num2;
    remainder = num1 % num2;
    printf("\n\n%d is divided by %d", num1, num2);
    printf("\nQuotient = %d", quotient);
    printf("\nRemainder = %d", remainder);
  } else {
    printf("\n\n%d is not divisible by %d", num1, num2);
  }

  return 0;
}
