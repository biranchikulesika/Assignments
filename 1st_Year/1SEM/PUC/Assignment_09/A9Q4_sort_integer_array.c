/**
 * @file a9q4_sort_integer_array.c
 * @author Biranchi Kulesika
 * @date {empty}
 * @brief Sorts an integer array in ascending order.
 *
 * This program prompts the user for the size and elements of an integer
 * array. It then sorts the array in ascending order using the Bubble
 * Sort algorithm and displays both the original and sorted arrays.
 */

#include <stdio.h>
#include <stdlib.h>

void sort_array_ascending(int arr[], int size)
{
    int temp;

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
        }
    }
}

void print_array(const char *title, const int arr[], int size)
{
    printf("%s", title);
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int array_size;
    printf("Enter the size of the array: ");
    if (scanf("%d", &array_size) != 1 || array_size <= 0)
    {
        printf("Error: Invalid input. Please enter a positive integer for the size.\n");
        return 1;
    }

    int *arr = (int *)malloc(array_size * sizeof(int));
    if (arr == NULL)
    {
        printf("Error: Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d integer elements for the array:\n", array_size);
    for (int i = 0; i < array_size; i++)
    {
        if (scanf("%d", &arr[i]) != 1)
        {
            printf("Error: Invalid input. Please enter integers only.\n");
            free(arr);
            return 1;
        }
    }

    printf("\nArray Sorting:\n");
    print_array("Original Array: ", arr, array_size);

    sort_array_ascending(arr, array_size);

    print_array("Sorted Array  : ", arr, array_size);
    printf("\n");

    free(arr);

    return 0;
}