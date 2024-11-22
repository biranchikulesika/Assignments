/*
 * This C program prints a Fibonacci triangle.
 * Reference: https://en.wikipedia.org/wiki/Fibonacci_sequence
 *
 * Author: Biranchi Kulesika
 * Date:
 * Assignment No.: 06
 * Question No.: 03
 */

#include <stdio.h>

int main()
{
    int rows, r, c, first = 0, sec = 1, next;

    do
    {
        printf("Enter the number of rows for Fibonacci Triangle: ");
        scanf("%d", &rows);
    } while (rows < 2); // Triangle is not possible with 0 or 1 row

    for (r = 1; r <= rows; r++)
    {
        for (c = 1; c <= r; c++)
        {
            next = first + sec;
            printf("%5d", next); // Print Fibonacci number with spacing between numbers
            first = sec;
            sec = next;
        }
        printf("\n");
        first = 0;
        sec = 1;
    }

    return 0;
}
