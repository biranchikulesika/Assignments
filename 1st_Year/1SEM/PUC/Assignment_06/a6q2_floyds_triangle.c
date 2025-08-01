/*
* Description: This program prints a Floyd's triangle, a right-angled isosceles triangle with consecutive numbers.
* Author: Biranchi Kulesika
* Date: 24 Sep, 2023
* Assignment No.: 06
* Question No.: 02
*/

#include <stdio.h>

int main() {
    int rows, r, c, number = 1;

    printf("Enter the number of rows for Floyd's Triangle: ");
    scanf("%d", &rows);

    for (r = 1; r <= rows; r++) {
        for (c = 1; c <= r; c++) {
            printf("%5d", number);
            number++;
        }
        printf("\n");
    }

    return 0;
}
