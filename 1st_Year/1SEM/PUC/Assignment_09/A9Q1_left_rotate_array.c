/**
 * @file a9q1_left_rotate_array.c
 * @author Biranchi Kulesika
 * @date {empty}
 * @brief Rotates an integer array to the left.
 *
 * This program takes an integer array and a number of rotations from the
 * user. It then rotates the array to the left by the specified number of
 * positions and displays the result. The rotation is performed efficiently
 * by applying single-left-rotations repeatedly.
 */

#include <stdio.h>
#include <stdlib.h>

void left_rotate_array_by_one(int arr[], int size)
{
    if (size <= 1)
    {
        return;
    }
    int temp = arr[0];

    for (int i = 0; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[size - 1] = temp;
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
    printf("Enter the number of elements for the array: ");
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

    printf("Enter %d elements for the array:\n", array_size);
    for (int i = 0; i < array_size; i++)
    {
        if (scanf("%d", &arr[i]) != 1)
        {
            printf("Error: Invalid input. Please enter integers only.\n");
            free(arr);
            return 1;
        }
    }

    printf("\n");
    print_array("Original Array: ", arr, array_size);

    int num_rotations;
    printf("\nEnter the number of left rotations: ");
    if (scanf("%d", &num_rotations) != 1 || num_rotations < 0)
    {
        printf("Error: Invalid input. Please enter a non-negative integer for rotations.\n");
        free(arr);
        return 1;
    }

    int effective_rotations = num_rotations % array_size;

    for (int i = 0; i < effective_rotations; i++)
    {
        left_rotate_array_by_one(arr, array_size);
    }

    printf("\nArray Rotation Result:\n");
    print_array("Rotated Array : ", arr, array_size);
    printf("\n\n");

    free(arr);
    return 0;
}
