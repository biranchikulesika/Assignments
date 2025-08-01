/*
* Description: This C program multiplies two matrices and displays the resultant matrix.
* The matrices are entered by the user as run-time input.
* Author: Biranchi Kulesika
* Date: 3 Feb, 2025
* Assignment No.: 13
* Question No.: 02
*/

#include <stdio.h>

void multiply_matrices(int rows1, int cols1, int mat1[rows1][cols1], int rows2, int cols2, int mat2[rows2][cols2], int result[rows1][cols2]) {
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

void print_matrix(int rows, int cols, int matrix[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%-5d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows1, cols1, rows2, cols2;

    printf("Enter dimensions for Matrix 1:\n");
    printf("Rows: ");
    scanf("%d", &rows1);
    printf("Columns: ");
    scanf("%d", &cols1);

    printf("\nEnter dimensions for Matrix 2:\n");
    printf("Rows (must be %d for multiplication): ", cols1);
    scanf("%d", &rows2);
    printf("Columns: ");
    scanf("%d", &cols2);

    if (cols1 != rows2) {
        printf("Matrix multiplication is not possible. Number of columns of first matrix must equal number of rows of second matrix.\n");
        return 1;
    }

    int mat1[rows1][cols1], mat2[rows2][cols2], result[rows1][cols2];

    printf("\nEnter elements of Matrix 1 (%d x %d):\n", rows1, cols1);
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("\nEnter elements of Matrix 2 (%d x %d):\n", rows2, cols2);
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }

    printf("\nMatrix 1:\n");
    print_matrix(rows1, cols1, mat1);

    printf("\nMatrix 2:\n");
    print_matrix(rows2, cols2, mat2);

    multiply_matrices(rows1, cols1, mat1, rows2, cols2, mat2, result);

    printf("\nResultant matrix after multiplication:\n");
    print_matrix(rows1, cols2, result);

    return 0;
}