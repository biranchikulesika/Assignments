/*
*Assignment No.: 09
*Question No.: 05
*Date: [empty]

* Program: Count Occurence in a array
* Description: This C program counts the no. of
* occurances a key has in the array of natural numbers.

* Author: Biranchi Kulesika
* Date: December 5, 2024
* Version: 1.0
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
                return 0; // Terminate after 3 invalid attempts
            }
            printf("\nInvalid input!\nPlease enter a number >= 1: ");
        }
    }

    // Created integer with dynamic memory allocation

    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL)
    {
        printf("Memory allocation failed. Exiting...\n");
        return 1;
    }

    // Prompts the user to enter elements in the array
    printf("Enter the elements of the array: \n");
    for (int i = 0; i < n; i++)
    {
        fflush(stdin);
        scanf("%d", &arr[i]);
    }

    // Prints the array elements using user defined function
    printf("\nArray contents: ");
    displayArray(arr, n);

    // Finds number of occurences in the array using user define functions
    findOccurrences(arr, n);

    free(arr);
    return 0;
}
