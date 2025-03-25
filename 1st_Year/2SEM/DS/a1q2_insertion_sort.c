/*
 * Assignment No.: 01
 * Question No.: 2
 * Date: 24 March, 2025
 *
 * Program: Insertion Sort Implementation
 * Description: This program sorts an array of integers in descending order using the insertion sort algorithm.
 *
 * Author: Biranchi Kulesika
 * Date: 25 March, 2025
 * Version: 1.0
 */

#include <stdio.h>
#include <stdlib.h>

void insertionSort(float *arr, int n)
{
	for (int i = 1; i < n; i++)
	{
		int key = arr[i];
		int j = i - 1;

		while (j >= 0 && arr[j] < key)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
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

	insertionSort(arr, n);

	printf("The sorted array is:\n");
	printArray(arr, n);

	return 0;
}