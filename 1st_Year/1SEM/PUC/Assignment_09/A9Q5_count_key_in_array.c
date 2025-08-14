/**
 * @file a9q5_count_key_in_array.c
 * @author Biranchi Kulesika
 * @date {empty}
 * @brief Counts the occurrences of a key in an array of integers.
 *
 * This C program prompts the user for the size and elements of an integer
 * array. It then asks for a key value and counts and displays the number
 * of times the key appears in the array.
 */

#include <stdio.h>
#include <stdlib.h>

int count_occurrences(const int arr[], int size, int key)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            count++;
        }
    }
    return count;
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

    printf("\nEnter the number of elements in the array: ");
    if (scanf("%d", &array_size) != 1 || array_size <= 0)
    {
        printf("Error: Invalid input. Please enter a positive integer for the size.\n");
        return 1;
    }

    int *arr = (int *)malloc(array_size * sizeof(int));
    if (arr == NULL)
    {
        printf("Memory allocation failed. Exiting...\n");
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

    printf("\nArray Analysis:\n");
    print_array("Array contents: ", arr, array_size);

    int key;
    printf("\nEnter the number to search for: ");
    if (scanf("%d", &key) != 1)
    {
        printf("Error: Invalid input. Please enter a valid integer key.\n");
        free(arr);
        return 1;
    }

    int occurrences = count_occurrences(arr, array_size, key);

    if (occurrences == 0)
    {
        printf("\nThe key %d was not found in the array.\n\n", key);
    }
    else
    {
        printf("\nThe key %d was found %d time(s) in the array.\n\n", key, occurrences);
    }

    free(arr);
    return 0;
}
