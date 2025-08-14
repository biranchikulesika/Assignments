/**
 * @file a13q2_multiply_matrices.c
 * @author Biranchi Kulesika
 * @date {empty}
 * @brief Multiplies two matrices.
 *
 * This program prompts the user for the dimensions of two matrices,
 * validates that they are compatible for multiplication, and then reads
 * their elements. It performs the multiplication using a dedicated function
 * and displays the original and resulting matrices.
 */
#include <stdio.h>
#include <stdbool.h>

void print_matrix(int rows, int cols, int matrix[rows][cols])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%-6d", matrix[i][j]);
        }
        printf("\n");
    }
}

bool read_matrix_elements(int rows, int cols, int matrix[rows][cols], const char *matrix_name)
{
    printf("\nEnter elements for %s:\n", matrix_name);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("[%d, %d] = ", i + 1, j + 1);
            if (scanf("%d", &matrix[i][j]) != 1)
            {
                printf("\nError: Invalid element input. Please enter integers only.\n");
                return false;
            }
        }
    }
    return true;
}

void multiply_matrices(int rows1, int common_dim, int cols2, int matrix1[rows1][common_dim], int matrix2[common_dim][cols2], int result_matrix[rows1][cols2])
{
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            result_matrix[i][j] = 0;
            for (int k = 0; k < common_dim; k++)
            {
                result_matrix[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

int main()
{
    int rows1, cols1, rows2, cols2;

    printf("\nMatrix Multiplication\n");
    printf("Enter dimensions for the first matrix:\n");
    printf("  Rows = ");
    if (scanf("%d", &rows1) != 1 || rows1 <= 0)
    {
        printf("Error: Rows must be a positive integer.\n");
        return 1;
    }
    printf("  Columns = ");
    if (scanf("%d", &cols1) != 1 || cols1 <= 0)
    {
        printf("Error: Columns must be a positive integer.\n");
        return 1;
    }

    printf("\nEnter dimensions for the second matrix:\n");
    rows2 = cols1;

    printf("  Rows = %d", rows2);

    printf("  Columns = ");
    if (scanf("%d", &cols2) != 1 || cols2 <= 0)
    {
        printf("Error: Columns must be a positive integer.\n");
        return 1;
    }

    if (cols1 != rows2)
    {
        printf("\nError: Matrix multiplication not possible.\n");
        printf("The number of columns in the first matrix (%d) must equal the number of rows in the second matrix (%d).\n", cols1, rows2);
        return 1;
    }

    int matrix1[rows1][cols1], matrix2[rows2][cols2], result_matrix[rows1][cols2];

    if (!read_matrix_elements(rows1, cols1, matrix1, "Matrix 1"))
    {
        return 1;
    }
    if (!read_matrix_elements(rows2, cols2, matrix2, "Matrix 2"))
    {
        return 1;
    }

    multiply_matrices(rows1, cols1, cols2, matrix1, matrix2, result_matrix);

    printf("\nFirst Matrix (%d x %d):\n", rows1, cols1);
    print_matrix(rows1, cols1, matrix1);

    printf("\nSecond Matrix (%d x %d):\n", rows2, cols2);
    print_matrix(rows2, cols2, matrix2);

    printf("\nResultant Matrix (%d x %d):\n", rows1, cols2);
    print_matrix(rows1, cols2, result_matrix);

    printf("\n");

    return 0;
}