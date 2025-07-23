/*
*Assignment No.: 09
*Question No.: 04
*Date: [empty]

* Program: Sort Array of Integers
* Description: this C program takes integer array as input and sort it in ascending order.

* Author: Biranchi Kulesika
* Date: December 5, 2024
* Version: 1.0
*/

#include <stdio.h>
#include <stdlib.h>

void sortArray(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Invalid array size.\n");
        return 1;
    }

    // Dynamic memory allocation
    int *array = (int *)malloc(n * sizeof(int));
    if (array == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter elements to the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    // Displaying the array
    printf("\nThe entered elements to the array are:\n");
    printArray(array, n);

    // Sorting the array
    sortArray(array, n);

    // Displaying the sorted array
    printf("\nThe elements in the array after sorting:\n");
    printArray(array, n);

    // Free allocated memory
    free(array);

    return 0;
}
