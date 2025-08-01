/*
* Description: This C program adds two matrices and displays the resultant matrix.
* The matrices are entered by the user as run-time input.
* Author: Biranchi Kulesika
* Date: 3 Feb, 2025
* Assignment No.: 13
* Question No.: 01
*/

#include <stdio.h>

void add_matrices(int rows, int cols, int mat1[rows][cols], int mat2[rows][cols], int result[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

int main() {
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int mat1[rows][cols], mat2[rows][cols], result[rows][cols];

    printf("\nEnter elements of the first matrix (%d x %d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("\nEnter elements of the second matrix (%d x %d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }

    printf("\nFirst matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%-4d ", mat1[i][j]);
        }
        printf("\n");
    }

    printf("\nSecond matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%-4d ", mat2[i][j]);
        }
        printf("\n");
    }

    add_matrices(rows, cols, mat1, mat2, result);

    printf("\nResultant matrix after addition:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%-4d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}