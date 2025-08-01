/*
* Description: This C program takes a square matrix as input and prints its lower triangular part (half pyramid).
* Author: Biranchi Kulesika
* Date: 12 Dec, 2024
* Assignment No.: 10
* Question No.: 02
*/

#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int matrix[n][n]; // VLA (Variable Length Array) - C99 feature

    printf("Enter the elements of the %d x %d matrix:\n", n, n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nThe entered matrix is:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nLower triangular part of the matrix (half pyramid):\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j <= i; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
