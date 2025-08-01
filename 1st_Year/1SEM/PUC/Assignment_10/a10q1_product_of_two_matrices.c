/*
* Description: This C program finds the product of two matrices.
* The number of rows, columns and data in the elements are
* entered by the user as run-time input.
* Author: Biranchi Kulesika
* Date: 12 Dec, 2024
* Assignment No.: 10
* Question No.: 01
*/

#include <stdio.h>

int main() {
    int rows1, cols1, rows2, cols2, i, j, k;

    printf("Enter dimensions for Matrix 1:\n");
    printf("Rows: ");
    scanf("%d", &rows1);
    printf("Columns: ");
    scanf("%d", &cols1);

    printf("\nEnter dimensions for Matrix 2:\n");
    rows2 = cols1; // For matrix multiplication, rows of second matrix must equal columns of first
    printf("Rows: %d (must be equal to columns of Matrix 1)\n", rows2);
    printf("Columns: ");
    scanf("%d", &cols2);

    int mat1[rows1][cols1], mat2[rows2][cols2], prod[rows1][cols2];

    // Initialize product matrix with 0
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols2; j++) {
            prod[i][j] = 0;
        }
    }

    printf("\nEnter elements for Matrix 1 (%d x %d):\n", rows1, cols1);
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols1; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("\nEnter elements for Matrix 2 (%d x %d):\n", rows2, cols2);
    for (i = 0; i < rows2; i++) {
        for (j = 0; j < cols2; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }

    printf("\nMatrix 1:\n");
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols1; j++) {
            printf("%d\t", mat1[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix 2:\n");
    for (i = 0; i < rows2; i++) {
        for (j = 0; j < cols2; j++) {
            printf("%d\t", mat2[i][j]);
        }
        printf("\n");
    }

    // Perform matrix multiplication
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols2; j++) {
            for (k = 0; k < cols1; k++) {
                prod[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    printf("\nProduct of the two matrices:\n");
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols2; j++) {
            printf("%d\t", prod[i][j]);
        }
        printf("\n");
    }

    return 0;
}
