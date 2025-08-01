/*
* Description: This C program performs the four basic arithmetic operations
* such as addition, subtraction, multiplication, and division.
* Author: Biranchi Kulesika
* Date: 2 Sep, 2023
* Assignment No.: 01
* Question No.: 01
*/
#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    printf("\nThe entered numbers are %d and %d.\n", num1, num2);

    printf("Sum = %d + %d = %d\n", num1, num2, num1 + num2);
    printf("Difference = %d - %d = %d\n", num1, num2, num1 - num2);
    printf("Product = %d * %d = %d\n", num1, num2, num1 * num2);

    if (num2 != 0) {
        printf("Quotient = %d / %d = %d\n", num1, num2, num1 / num2);
        printf("Remainder = %d %% %d = %d\n", num1, num2, num1 % num2);
    } else {
        printf("Cannot divide by zero.\n");
    }

    return 0;
}
