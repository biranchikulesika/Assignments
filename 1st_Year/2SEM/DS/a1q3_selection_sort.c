/*
 * Assignment No.: 01
 * Question No.: 3
 * Date: 24 March, 2025
 *
 * Program: Selection Sort Implementation
 * Description: This program sorts an array of floating point values in ascending order using the selection sort algorithm.
 *
 * Author: Biranchi Kulesika
 * Date: 25 March, 2025
 * Version: 1.0
 */

#include <stdio.h>
#include <stdlib.h>

void selectionSort(float *arr, int arrSize)
{
	for (int i = 0; i < arrSize - 1; i++)
	{
		int min = i;
		for (int j = i + 1; j < arrSize; j++)
		{
			if (arr[j] < arr[min])
			{
				min = j;
			}
		}
		float temp = arr[min];
		arr[min] = arr[i];
		arr[i] = temp;
	}
}

void printArray(float *arr, int arrSize)
{
	for (int i = 0; i < arrSize; i++)
	{
		printf("%.2f ", arr[i]);
	}
	printf("\n");
}


int main()
{
	int n;
	printf("Enter the number of elements: ");
	scanf("%d", &n);

	if (n <= 0)
	{
		printf("Invalid size entered");
		return 1;
	}

	float *arr = (float *)malloc(n * sizeof(float));
	if (!arr)
	{
		printf("Memory allocation failed!\n");
		return 1;
	}

	printf("Enter %d elements separated by space:\n", n);
	for (int i = 0; i < n; i++)
	{
		scanf("%f", &arr[i]);
	}

	printf("The entered array is:\n");
	printArray(arr, n);

	selectionSort(arr, n);

	printf("The sorted array is:\n");
	printArray(arr, n);

	return 0;
}