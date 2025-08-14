/**
 * @file a10q1_matrix_product.c
 * @author Biranchi Kulesika
 * @date 13 Dec, 2024
 * @brief Calculates the product of two matrices.
 *
 * This program prompts the user for the dimensions and elements of two
 * matrices. It then checks if they are compatible for multiplication and,
 * if so, calculates and displays their product using Variable-Length Arrays (VLAs).
 */

#include <stdio.h>

int main()
{
	int rows1, cols1, rows2, cols2, i, j, k;

	printf("Enter the number of rows and columns for the matrices:\n");

	printf("\nMatrix 1:\n");
	printf("  Rows = ");
	if (scanf("%d", &rows1) != 1 || rows1 <= 0)
	{
		printf("Error: Invalid input. Rows must be a positive integer.\n");
		return 1;
	}
	printf("  Columns = ");
	if (scanf("%d", &cols1) != 1 || cols1 <= 0)
	{
		printf("Error: Invalid input. Columns must be a positive integer.\n");
		return 1;
	}

	printf("\nMatrix 2:\n");

	rows2 = cols1;
	printf("  Rows = %d", rows2);

	printf("\n  Columns = ");
	if (scanf("%d", &cols2) != 1 || cols2 <= 0)
	{
		printf("Error: Invalid input. Columns must be a positive integer.\n");
		return 1;
	}

	int mat1[rows1][cols1], mat2[rows2][cols2], prod[rows1][cols2];

	for (i = 0; i < rows1; i++)
	{
		for (j = 0; j < cols2; j++)
		{
			prod[i][j] = 0;
		}
	}

	printf("\nEnter the elements for Matrix 1:\n");
	for (i = 0; i < rows1; i++)
	{
		for (j = 0; j < cols1; j++)
		{
			printf("(%d, %d) = ", i + 1, j + 1);
			if (scanf("%d", &mat1[i][j]) != 1)
			{
				printf("Error: Invalid element input.\n");
				return 1;
			}
		}
	}

	printf("\nEnter the elements for Matrix 2:\n");
	for (i = 0; i < rows2; i++)
	{
		for (j = 0; j < cols2; j++)
		{
			printf("(%d, %d) = ", i + 1, j + 1);
			if (scanf("%d", &mat2[i][j]) != 1)
			{
				printf("Error: Invalid element input.\n");
				return 1;
			}
		}
	}

	printf("\nMatrix 1:\n");
	for (i = 0; i < rows1; i++)
	{
		for (j = 0; j < cols1; j++)
		{
			printf("%d\t", mat1[i][j]);
		}
		printf("\n");
	}

	printf("\nMatrix 2:\n");
	for (i = 0; i < rows2; i++)
	{
		for (j = 0; j < cols2; j++)
		{
			printf("%d\t", mat2[i][j]);
		}
		printf("\n");
	}

	for (i = 0; i < rows1; i++)
	{
		for (j = 0; j < cols2; j++)
		{
			for (k = 0; k < cols1; k++)
			{
				prod[i][j] += mat1[i][k] * mat2[k][j];
			}
		}
	}

	printf("\nThe product of the two matrices is:\n");
	for (i = 0; i < rows1; i++)
	{
		for (j = 0; j < cols2; j++)
		{
			printf("%d\t", prod[i][j]);
		}
		printf("\n");
	}

	return 0;
}