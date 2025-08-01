/*
* Description: This C program finds the greatest common divisor (GCD) of two integers using a user-defined function.
* The two integers are entered by the user as run-time input.
* Author: Biranchi Kulesika
* Date: 3rd Feb, 2025
* Assignment No.: 11
* Question No.: 03
*/

#include <stdio.h>

int hcf(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    printf("HCF finder\n\n");

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    if (num1 < 0 || num2 < 0) {
        printf("Please enter non-negative numbers.\n");
        return 1;
    }

    int result = hcf(num1, num2);

    printf("The HCF of %d and %d is: %d\n", num1, num2, result);

    return 0;
}
