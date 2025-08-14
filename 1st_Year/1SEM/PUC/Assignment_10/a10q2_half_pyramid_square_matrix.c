/**
 * @file a10q2_half_pyramid_square_matrix.c
 * @author Biranchi Kulesika
 * @date {empty}
 * @brief Displays the lower triangular part of a square matrix.
 *
 * This program prompts the user for the size and elements of a square
 * matrix. It then validates the input, prints the original matrix, and
 * finally displays its lower triangular part, which forms a "half pyramid" shape.
 */
#include <stdio.h>

int main()
{
	int i, j, size;

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
		{
			printf("%d\t", matrix[i][j]);
		}
		printf("\n");
	}

	printf("\nLower Triangular Matrix (Half Pyramid):\n");
	for (i = 0; i < size; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%d\t", matrix[i][j]);
		}
		printf("\n");
	}

	return 0;
}
