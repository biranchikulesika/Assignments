/*
* Assignment No.: 11
* Question No.: 03
* Date:

* Program: HCF Calculator
* Description: This C program finds the greatest common divisor (GCD) of any two integers using a user-defined function.
* The two integers are entered by the user as run-time input.

* Author: Biranchi Kulesika
* Date: 3rd Feb, 2025
* Version: 1.0
*/

#include <stdio.h>

int hcf(int a, int b) {
    if (b == 0) {
        return a;
    }
    return hcf(b, a % b);
}

int main() {
    int num1, num2;

    printf("HCF finder\n\n");

	printf("Enter first number: ");
    scanf("%d", &num1);

	printf("Enter second number: ");
	scanf("%d", &num2);

    int result = hcf(num1, num2);

    printf("The HCF of %d and %d is: %d\n", num1, num2, result);

    return 0;
}