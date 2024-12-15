#include <stdio.h>

int main()
{
	int i, j, n;

	printf("Enter the size of the square matrix: ");
	scanf("%d", &n);

	int matrix[n][n];

	printf("Enter the elements of the matrix:\n");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("(%d, %d): ", i + 1, j + 1);
			scanf("%d", &matrix[i][j]);
		}
	}

	printf("\nThe entered matrix is:\n");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d\t", matrix[i][j]);
		}
		printf("\n");
	}

	printf("\nHalf pyramid of the matrix:\n");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%d\t", matrix[i][j]);
		}
		printf("\n");
	}

	return 0;
}
