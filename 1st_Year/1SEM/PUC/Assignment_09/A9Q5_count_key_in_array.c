/*
*Assignment No.: 09
*Question No.: 05
*Date: [empty]

* Program: Count Occurence in a array
* Description: This C program counts the number of
* occurrences a key has in an array of natural numbers.

* Author: Biranchi Kulesika
* Date: December 5, 2024
*/

#include <stdio.h>
#include <stdlib.h>

void findOccurrences(int arr[], int size)
{
    int key, count = 0;

    printf("\nEnter the number to search for: ");
    scanf("%d", &key);

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            count++;
        }
    }

    if (count == 0)
    {
        printf("\nNo occurrences of %d found in the array.\n\n", key);
    }
    else
    {
        printf("\nFound %d occurrence(s) of %d in the array.\n\n", count, key);
    }
}

void displayArray(int arr[], int size)
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

    printf("\nEnter the number of elements in the array: ");

    int retry_count = 0;
    while (1)
    {
        scanf("%d", &n);

        if (n >= 1)
        {
            break;
        }
        else
        {
            retry_count++;
            if (retry_count >= 3)
            {
                printf("\nProgram terminated due to multiple wrong inputs.\n\n");
                return 0;
            }
            printf("\nInvalid input!\nPlease enter a number >= 1: ");
        }
    }

    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL)
    {
        printf("Memory allocation failed. Exiting...\n");
        return 1;
    }

    printf("Enter the elements of the array: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nArray contents: ");
    displayArray(arr, n);

    findOccurrences(arr, n);

    free(arr);
    return 0;
}
