/*
* Description: This C program takes rows, columns and
* element data of a matrix and finds its transpose.
* Author: Biranchi Kulesika
* Date: 13 Dec, 2024
* Assignment No.: 10
* Question No.: 05
*/

#include <stdio.h>

int main() {
    int rows, cols, i, j;

    printf("Enter the number of rows for the matrix: ");
    scanf("%d", &rows);
    printf("Enter the number of columns for the matrix: ");
    scanf("%d", &cols);

    int mat[rows][cols], trans_mat[cols][rows];

    printf("Enter the elements of the %d x %d matrix:\n", rows, cols);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    // Find the transpose
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            trans_mat[j][i] = mat[i][j];
        }
    }

    printf("\nEntered Matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }

    printf("\nTranspose of the Matrix:\n");
    for (i = 0; i < cols; i++) {
        for (j = 0; j < rows; j++) {
            printf("%d\t", trans_mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
