/*
 *This program is to print a Floyd's triangle.
 *We will the right-angled isosceles triangle with consecutive numbers.
 *
 *Author: Biranchi Kulesika
 *Date:
 *Assignment No.: 06
 *Question No.: 02
 */

#include <stdio.h>

int main()
{
    int rows, r, c, number = 1;

    printf("Enter the number of rows for Floyd's Triangle: ");
    scanf("%d", &rows);

    for (r = 1; r <= rows; r++)
    {
        for (c = 1; c <= r; c++)
        {
            printf("%5d", number); //added %5d to space between numbers in a row
            number++;
        }
        printf("\n");
    }

    return 0;
}
