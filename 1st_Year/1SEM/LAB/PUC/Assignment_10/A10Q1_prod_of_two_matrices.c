/*
* Assignment No.: 10
* Question No.: 01
* Date: [empty]

* Program Name: Product of two Matrices
* Description: This C program find the product of two matrices.
* The number of rows, columns and date in the elements are
* entered by the user as run-time input

* Author: Biranchi Kulesika
* Date: 12 Dec, 2024
*/

#include <stdio.h>

int main()
{
	int rows1, cols1, rows2, cols2, i, j, k;

	printf("Enter the number of rows and columns for the matrices:\n");

	// Input dimension for Matrix 1
	printf("\nMatrix 1:\n");
	printf("Rows = ");
	scanf("%d", &rows1);
	printf("Columns = ");
	scanf("%d", &cols1);

	// Input dimension for Matrix 2
	// rows2 should be equal to cols1 for multiplication
	printf("\nMatrix 2:\n");
	rows2 = cols1;
	printf("Rows = %d", rows2);

	printf("\nColumns = ");
	scanf("%d", &cols2);

	int mat1[rows1][cols1], mat2[rows2][cols2], prod[rows1][cols2];

	// Initialised product matrix with 0
	for (i = 0; i < rows1; i++)
	{
		for (j = 0; j < cols2; j++)
		{
			prod[i][j] = 0;
		}
	}

	// Input Matrix 1
	printf("\nEnter the elements for Matrix 1:\n");
	for (i = 0; i < rows1; i++)
	{
		for (j = 0; j < cols1; j++)
		{
			printf("(%d, %d) = ", i + 1, j + 1);
			scanf("%d", &mat1[i][j]);
		}
	}

	// Input Matrix 2
	printf("\nEnter the elements for Matrix 2:\n");
	for (i = 0; i < rows2; i++)
	{
		for (j = 0; j < cols2; j++)
		{
			printf("(%d, %d) = ", i + 1, j + 1);
			scanf("%d", &mat2[i][j]);
		}
	}

	// Display Matrix 1
	printf("\nMatrix 1:\n");
	for (i = 0; i < rows1; i++)
	{
		for (j = 0; j < cols1; j++)
		{
			printf("%d\t", mat1[i][j]);
		}
		printf("\n");
	}

	// Display Matrix 2
	printf("\nMatrix 2:\n");
	for (i = 0; i < rows2; i++)
	{
		for (j = 0; j < cols2; j++)
		{
			printf("%d\t", mat2[i][j]);
		}
		printf("\n");
	}

	printf("\nThe product of the two matrices is:\n");
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
