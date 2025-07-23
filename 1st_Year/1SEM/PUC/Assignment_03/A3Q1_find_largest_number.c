/*
 *This C program finds the largest number among three numbers
 *entered by the user as run-time input.
 *
 *Author: Biranchi Kulesika
 *Date: 20 Sep, 2023
 *Assignment No.: 03
 *Question No.: 01
 */

#include <stdio.h>

int main() {
  int num1, num2, num3, largest;

  printf("\n\nEnter the first number: ");
  scanf("%d", &num1);
  printf("Enter the second number: ");
  scanf("%d", &num2);
  printf("Enter the third number: ");
  scanf("%d", &num3);
  printf("\nThe entered numbers are %d, %d, and %d.", num1, num2, num3);

  if (num1 >= num2) {
    if (num1 >= num3) {
      largest = num1;
    } else {
      largest = num3;
    }
  } else {
    if (num2 >= num3) {
      largest = num2;
    } else {
      largest = num3;
    }
  }

  // Print the largest number
  printf("\n\nThe largest number is: %d\n\n", largest);

  return 0;
}
