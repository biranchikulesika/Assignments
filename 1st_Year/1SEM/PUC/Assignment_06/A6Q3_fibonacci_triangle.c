/*
* Description: This program prints a triangle using a specific Fibonacci Series pattern
* where the numbers in each row are consecutive Fibonacci numbers, restarting the sequence for each row.
* Author: Biranchi Kulesika
* Date: November 26, 2024
* Assignment No.: 06
* Question No.: 03
*/

#include <stdio.h>

int main() {
    int rows, r, c, first, sec, next;

    do {
        printf("Enter the number of rows for Fibonacci Triangle: ");
        scanf("%d", &rows);
    } while (rows < 1); // Triangle is not possible with 0 rows

    for (r = 1; r <= rows; r++) {
        first = 0;
        sec = 1;
        for (c = 1; c <= r; c++) {
            next = first + sec;
            printf("%5d", next);
            first = sec;
            sec = next;
        }
        printf("\n");
    }

    return 0;
}
