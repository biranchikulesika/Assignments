/*
* Description: This C program prints a Pascal's triangle.
* Author: Biranchi Kulesika
* Date: 24 Sep, 2023
* Assignment No.: 06
* Question No.: 04
*/

#include <stdio.h>

void printPascalsTriangle(int rows) {
    if (rows <= 0) {
        printf("No rows to display.\n");
        return;
    }

    for (int i = 0; i < rows; i++) {
        // Print leading spaces to center-align the triangle
        for (int j = 0; j < rows - i - 1; j++) {
            printf("   ");
        }

        long long coef = 1;
        for (int j = 0; j <= i; j++) {
            printf("%7lld", coef);
            coef = coef * (i - j) / (j + 1);
        }
        printf("\n\n");
    }
}

int main() {
    int rows;
    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &rows);

    if (rows <= 0) {
        printf("Please enter a positive number for rows.\n");
    } else {
        printPascalsTriangle(rows);
    }

    return 0;
}

