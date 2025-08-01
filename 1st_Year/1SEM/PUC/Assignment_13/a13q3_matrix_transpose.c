/*
* Description: This C program computes the transpose of a matrix and stores the resultant matrix.
* The matrix is entered by the user as run-time input.
* Author: Biranchi Kulesika
* Date: 3 Feb, 2025
* Assignment No.: 13
* Question No.: 03
*/

#include <stdio.h>

void get_transpose(int rows, int cols, int mat[rows][cols], int result[cols][rows]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[j][i] = mat[i][j];
        }
    }
}

int main() {
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int mat[rows][cols], result[cols][rows];

    printf("\nEnter elements of the matrix (%d x %d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\nOriginal matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%-5d ", mat[i][j]);
        }
        printf("\n");
    }

    get_transpose(rows, cols, mat, result);

    printf("\nTransposed matrix:\n");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%-5d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
