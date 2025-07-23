/*
* Assignment No.: 10
* Question No.: 03
* Date: [empty]

* Program Name: Symmetric Matrix Check
* Description: This C program  inputs the elements
* of a square matrid and checks if is symmetric.

* Author: Biranchi Kulesika
* Date: 18 Dec, 2024
*/
#include <stdio.h>

int main()
{
	int size, i, j;

	printf("Enter the dimension of the matrix: ");
	scanf("%d", &size);

	int mat[50][50], trans_mat[50][50];

	printf("Enter the elements in the matrix:\n");
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			printf("(%d, %d) = ", i + 1, j + 1);
			scanf("%d", &mat[i][j]);
		}
	}

	// Display the entered matrix
	printf("\nMatrix:\n");
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			printf("%d\t", mat[i][j]);
		}
		printf("\n");
	}

	// Find the transpose of the matrix
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)	  // diagonal elememt
				continue; // skip diagonal element
			trans_mat[j][i] = mat[i][j];
		}
	}

	// Check if the matrix is symmetric
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (trans_mat[i][j] != mat[i][j])
			{
				printf("\nThe above matrix is not a symmetric matrix.\n");
				return 1;
			}
		}
	}

	printf("\nThe above matrix is a symmetric matrix.\n");
	return 0;
}
