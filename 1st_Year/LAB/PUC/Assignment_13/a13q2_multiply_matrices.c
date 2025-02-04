/*
* Assignment No.: 13
* Question No.: 02
* Date:

* Program: Matrix Multiplication
* Description: This C program multiplies two matrices and displays the resultant matrix using a user-defined function named multiply_matrices().
* The matrices are entered by the user as run-time input.

* Author: Biranchi Kulesika
* Date: 3 Feb, 2025
* Version: 1.0
*/

#include <stdio.h>

void multiply_matrices(int rows1, int cols1, int mat1[rows1][cols1], int rows2, int cols2, int mat2[rows2][cols2], int result[rows1][cols2])
{
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++)
            {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

void print_matrix(int rows, int cols, int matrix[rows][cols])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%-5d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int rows1, cols1, rows2, cols2;

    printf("\nMatrix 1: ");
    printf("\nRows = ");
    scanf("%d", &rows1);
    printf("Columns = ");
    scanf("%d", &cols1);

    printf("\nMatrix 2: ");
    rows2 = cols1;
    printf("\nRows = %d", cols1);
    printf("\nColumns = ");
    scanf("%d", &cols2);

    if (cols1 != rows2)
    {
        printf("Matrix multiplication is not possible with the given dimensions.\n");
        return 1;
    }

    int mat1[rows1][cols1], mat2[rows2][cols2], result[rows1][cols2];

    printf("\nEnter elements of the matrix 1:\n");
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols1; j++)
        {
            printf("[%d,%d] = ", i + 1, j + 1);
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("\nEnter elements of the matrix 2:\n");
    for (int i = 0; i < rows2; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            printf("[%d,%d] = ", i + 1, j + 1);
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