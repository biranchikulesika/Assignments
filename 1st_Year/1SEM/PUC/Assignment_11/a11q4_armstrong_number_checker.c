/*
* Description: This C program checks whether an integer is an Armstrong number using a user-defined function.
* The integer is entered by the user as run-time input.
* Author: Biranchi Kulesika
* Date: 3 Feb 2025
* Assignment No.: 11
* Question No.: 04
*/

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isArmstrong(int num) {
    int originalNum = num;
    int remainder, n = 0;
    double result = 0.0;

    // Count number of digits
    for (originalNum = num; originalNum != 0; originalNum /= 10) {
        n++;
    }

    originalNum = num;

    // Calculate sum of nth powers of individual digits
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
