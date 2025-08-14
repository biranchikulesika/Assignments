/**
 * @file a13q3_matrix_transpose.c
 * @author Biranchi Kulesika
 * @date {empty}
 * @brief Calculates the transpose of a given matrix.
 *
 * This program prompts the user for the dimensions and elements of a matrix.
 * It validates the input, displays the original matrix, calculates its
 * transpose using a dedicated function, and finally prints the result.
 */
#include <stdio.h>

void print_matrix(int rows, int cols, int matrix[rows][cols])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%-5d", matrix[i][j]);
        }
        printf("\n");
    }
}

void calculate_transpose(int rows, int cols, int matrix[rows][cols], int transpose_matrix[cols][rows])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            transpose_matrix[j][i] = matrix[i][j];
        }
    }
}

int main()
{
    int rows, cols;

    printf("Matrix Transpose:\n");
    printf("Enter the dimensions of the matrix:\n");
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

    int matrix[rows][cols], transpose_matrix[cols][rows];

    printf("\nEnter elements for the matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("[%d, %d] = ", i + 1, j + 1);
            if (scanf("%d", &matrix[i][j]) != 1)
            {
                printf("\nError: Invalid element input. Please enter integers only.\n");
                return 1;
            }
        }
    }

    calculate_transpose(rows, cols, matrix, transpose_matrix);

    printf("\nOriginal Matrix (%d x %d):\n", rows, cols);
    print_matrix(rows, cols, matrix);

    printf("\nTransposed Matrix (%d x %d):\n", cols, rows);
    print_matrix(cols, rows, transpose_matrix);

    return 0;
}