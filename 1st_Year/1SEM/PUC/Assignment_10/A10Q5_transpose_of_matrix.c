/*
* Assignment No.: 10
* Question No.: 05
* Date: [empty]

* Program Name: Transpose of a Matrix
* Description: This C program takes rows, columns and
* element data of a matrix and find its transpose.

* Author: Biranchi Kulesika
* Date: 13 Dec, 2024
*/

#include <stdio.h>

int main()
{
	int rows, cols, i, j;

	printf("Enter the dimension of the matrix:\n");
	printf("Rows = ");
	scanf("%d", &rows);
	printf("Columns = ");
	scanf("%d", &cols);

	int max = (rows > cols) ? rows : cols;

	int mat[rows][cols], trans_mat[cols][rows];

	// Asks for user input
	printf("Enter the elements in the matrix:\n");
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			printf("(%d, %d) = ", i + 1, j + 1);
			scanf("%d", &mat[i][j]);
		}
	}

	// Find the transpose
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			trans_mat[j][i] = mat[i][j];
		}
	}

	// Display the entered matrix
	printf("\nMatrix:\n");
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			printf("%d\t", mat[i][j]);
		}
		printf("\n");
	}

	// Display the transpose of the matrix
	printf("\nTranspose of the Matrix:\n");
	for (i = 0; i < cols; i++)
	{
		for (j = 0; j < rows; j++)
		{
			printf("%d\t", trans_mat[i][j]);
		}
		printf("\n");
	}

	return 0;
}
