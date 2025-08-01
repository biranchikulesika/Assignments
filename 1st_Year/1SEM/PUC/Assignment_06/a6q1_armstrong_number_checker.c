/*
* Description: This C program checks if a number is an Armstrong number or not.
* Author: Biranchi Kulesika
* Date: 24 Sep, 2023
* Assignment No.: 06
* Question No.: 01
*/

#include <stdio.h>
#include <math.h>

int main() {
    long long num, temp, sum = 0;
    int digit, digit_count = 0;

    printf("Enter a number: ");
    scanf("%lld", &num);

    temp = num;

    // Count the number of digits
    while (temp != 0) {
        temp /= 10;
        digit_count++;
    }

    temp = num;

    // Calculate sum of powers of digits
    while (temp != 0) {
        digit = temp % 10;
        sum += pow(digit, digit_count);
        temp /= 10;
    }

    if (sum == num) {
        printf("%lld is an Armstrong number.\n", num);
    } else {
        printf("%lld is not an Armstrong number.\n", num);
    }

    return 0;
}
