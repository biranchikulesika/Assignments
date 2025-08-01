/*
* Description: This C program inputs the elements of a square matrix and checks if it is symmetric.
* Author: Biranchi Kulesika
* Date: 18 Dec, 2024
* Assignment No.: 10
* Question No.: 03
*/
#include <stdio.h>

int main() {
    int size, i, j;

    printf("Enter the dimension of the square matrix: ");
    scanf("%d", &size);

    int mat[size][size]; // Using VLA

    printf("Enter the elements of the %d x %d matrix:\n", size, size);
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\nEntered Matrix:\n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }

    // Check if the matrix is symmetric
    int is_symmetric = 1; // Assume symmetric initially
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            if (mat[i][j] != mat[j][i]) {
                is_symmetric = 0; // Not symmetric
                break;
            }
        }
        if (!is_symmetric) {
            break;
        }
    }

    if (is_symmetric) {
        printf("\nThe above matrix is a symmetric matrix.\n");
    } else {
        printf("\nThe above matrix is not a symmetric matrix.\n");
    }

    return 0;
}
