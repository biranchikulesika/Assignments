/*
* Assignment No.: 11
* Question No.: 4
* Date:

* Program: Armstrong Number Checker
* Description: This C program checks whether an integer is an Armstrong number using a user-defined function.
* The integer is entered by the user as run-time input.

* Author: Biranchi Kulesika
* Date: 3 Feb 2025
* Version: 1.0
*/

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isArmstrong(int num) {
    int originalNum, remainder, n = 0;
    double result = 0.0;

    originalNum = num;

    for (originalNum = num; originalNum != 0; ++n) {
        originalNum /= 10;
    }

    originalNum = num;

    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    return (int)result == num;
}

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (isArmstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}