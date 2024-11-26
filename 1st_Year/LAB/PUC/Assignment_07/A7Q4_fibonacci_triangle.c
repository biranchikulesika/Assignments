/*
*Assignment No.: 07
*Question No.: 04
*Date: [empty]

* Program: Fibonacci Triangle Printer
* Description: This program prints a triangle using the Fibonacci Series
* where the number of rows are entered by the user.

============================================================

0
1   1
2   3   5
8   13  21  34
55  89  144 233 377

Reference: https://en.wikipedia.org/wiki/Fibonacci_sequence
============================================================

* Author: Biranchi Kulesika
* Date: November 26, 2024
* Version: 1.0
*/

#include <stdio.h>

int main()
{
    int rows, r, c, count = 0;
    long long first = 0, sec = 1, next;

    do
    {
        printf("Enter the number of rows for Fibonacci Triangle: ");
        scanf("%d", &rows);
    } while (rows < 2); // Triangle is not possible with 0 or 1 row

    for (r = 1; r <= rows; r++)
    {
        for (c = 1; c <= r; c++)
        {
            if (count == 0)
            {
                printf("%5lld", first);
                count++;
            }
            else if (count == 1)
            {
                printf("%5lld", sec);
                count++;
            }
            else
            {
                next = first + sec;
                printf("%5lld", next); // Print Fibonacci number with spacing between numbers
                first = sec;
                sec = next;
            }
        }
        printf("\n");
    }

    return 0;
}