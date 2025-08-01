/*
* Description: This program prints a triangle using the Fibonacci Series
* where the number of rows are entered by the user.
* Author: Biranchi Kulesika
* Date: November 26, 2024
* Assignment No.: 07
* Question No.: 04
*/

#include <stdio.h>

int main() {
    int rows, r, c;
    long long first = 0, second = 1, next;

    do {
        printf("Enter the number of rows for Fibonacci Triangle: ");
        scanf("%d", &rows);
    } while (rows < 1); // Triangle is not possible with 0 rows

    for (r = 1; r <= rows; r++) {
        for (c = 1; c <= r; c++) {
            printf("%5lld", first);
            next = first + second;
            first = second;
            second = next;
        }
        printf("\n");
    }

    return 0;
}
