/**
 * @file a10q3_symmetric_matrix_check.c
 * @author Biranchi Kulesika
 * @date {empty}
 * @brief Checks if a square matrix is symmetric.
 *
 * This program prompts the user for the size and elements of a square
 * matrix. It then efficiently checks if the matrix is symmetric (i.e.,
 * equal to its transpose, where matrix[i][j] == matrix[j][i])
 * and prints the result.
 */

#include <stdio.h>

int main()
{
	int size, i, j;
	int is_symmetric = 1;

	printf("Enter the size of the square matrix: ");
	if (scanf("%d", &size) != 1 || size <= 0)
	{
		printf("Error: Invalid input. Size must be a positive integer.\n");
		return 1;
	}

	int matrix[size][size];

	printf("\nEnter the elements of the matrix:\n");
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			printf("(%d, %d) = ", i + 1, j + 1);
			if (scanf("%d", &matrix[i][j]) != 1)
			{
				printf("\nError: Invalid element input. Please enter integers only.\n");
				return 1;
			}
		}
	}

	printf("\nThe entered matrix is:\n");
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
			printf("%d\t", matrix[i][j]);

		printf("\n");
	}

	for (i = 0; i < size; i++)
	{
		for (j = i + 1; j < size; j++)
		{
			if (matrix[i][j] != matrix[j][i])
			{
				is_symmetric = 0;
				break;
			}
		}
		if (is_symmetric == 0)
			break;
	}

	printf("\nThe matrix is %s\n\n", is_symmetric ? "symmetric." : "NOT symmetric.");

	return 0;
}
