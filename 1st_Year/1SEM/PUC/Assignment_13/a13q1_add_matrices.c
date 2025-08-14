/**
 * @file a13q1_add_matrices.c
 * @author Biranchi Kulesika
 * @date {empty}
 * @brief Adds two matrices of the same dimensions.
 *
 * This program prompts the user for the dimensions and elements of two
 * matrices. It validates the input, performs matrix addition using a
 * dedicated function, and displays the original and resulting matrices.
 */
#include <stdio.h>

void print_matrix(int rows, int cols, int matrix[rows][cols])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            printf("%-5d", matrix[i][j]);
        printf("\n");
    }
}

void add_matrices(int rows, int cols, int matrix1[rows][cols], int matrix2[rows][cols], int result_matrix[rows][cols])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            result_matrix[i][j] = matrix1[i][j] + matrix2[i][j];
    }
}

int main()
{
    int rows, cols;

    printf("Matrix Addition:\n");
    printf("Enter the dimensions for the matrices:\n");
    printf("  Rows = ");
    if (scanf("%d", &rows) != 1 || rows <= 0)
    {
        printf("Error: Invalid input. Rows must be a positive integer.\n");
        return 1;
    }
    printf("  Columns = ");
    if (scanf("%d", &cols) != 1 || cols <= 0)
    {
        printf("Error: Invalid input. Columns must be a positive integer.\n");
        return 1;
    }

    int matrix1[rows][cols], matrix2[rows][cols], result_matrix[rows][cols];

    printf("\nEnter elements for the first matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("[%d, %d] = ", i + 1, j + 1);
            if (scanf("%d", &matrix1[i][j]) != 1)
            {
                printf("\nError: Invalid element input. Please enter integers only.\n");
                return 1;
            }
        }
    }

    printf("\nEnter elements for the second matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("[%d, %d] = ", i + 1, j + 1);
            if (scanf("%d", &matrix2[i][j]) != 1)
            {
                printf("\nError: Invalid element input. Please enter integers only.\n");
                return 1;
            }
        }
    }

    add_matrices(rows, cols, matrix1, matrix2, result_matrix);

    printf("\nFirst Matrix:\n");
    print_matrix(rows, cols, matrix1);

    printf("\nSecond Matrix:\n");
    print_matrix(rows, cols, matrix2);

    printf("\nResultant Matrix (Sum):\n");
    print_matrix(rows, cols, result_matrix);

    return 0;
}