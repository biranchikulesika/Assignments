/*
* Description: This C program reverses an integer entered by the user.
* Author: Biranchi Kulesika
* Date: December 15, 2024
* Assignment No.: 11
* Question No.: 01
*/

#include <stdio.h>

int main() {
    int num, reversed = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    printf("Reversed number: %d\n", reversed);

    return 0;
}