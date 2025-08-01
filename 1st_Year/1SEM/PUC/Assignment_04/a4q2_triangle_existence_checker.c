/*
* Description: A C program to check whether a triangle is possible
* based on three sides entered by the user.
* Author: Biranchi Kulesika
* Date: 23 Sep, 2023
* Assignment No.: 04
* Question No.: 02
*/

#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter the three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if ((a + b) > c && (a + c) > b && (b + c) > a) {
        printf("Triangle with the sides %d, %d and %d exists.\n", a, b, c);
    } else {
        printf("Triangle with the sides %d, %d and %d doesn't exist.\n", a, b, c);
    }

    return 0;
}
