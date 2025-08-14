/**
 * @file a10q5_matrix_transpose.c
 * @author Biranchi Kulesika
 * @date {empty}
 * @brief Calculates the transpose of a given matrix.
 *
 * This program prompts the user for the dimensions and elements of a matrix.
 * It then validates the input, displays the original matrix, calculates its
 * transpose, and finally prints the resulting transposed matrix.
 */
#include <stdio.h>

int main()
{
	int rows, cols, i, j;

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

	int matrix[rows][cols];
	int transpose_matrix[cols][rows];

	printf("\nEnter the elements of the matrix:\n");
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			printf("(%d, %d) = ", i + 1, j + 1);
			if (scanf("%d", &matrix[i][j]) != 1)
			{
				printf("\nError: Invalid element input. Please enter integers only.\n");
				return 1;
			}
		}
	}

	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			transpose_matrix[j][i] = matrix[i][j];
		}
	}

	printf("\nThe original matrix is:\n");
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			printf("%d\t", matrix[i][j]);
		}
		printf("\n");
	}

	printf("\nThe transpose of the matrix is:\n");
	for (i = 0; i < cols; i++)
	{
		for (j = 0; j < rows; j++)
		{
			printf("%d\t", transpose_matrix[i][j]);
		}
		printf("\n");
	}

	return 0;
}
