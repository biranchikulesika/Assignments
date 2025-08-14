/**
 * @file a9q3_reverse_character_array.c
 * @author Biranchi Kulesika
 * @date {empty}
 * @brief Reverses an array of characters.
 *
 * This program prompts the user for the size of a character array, reads
 * the characters, and then reverses the array in-place. The original and
 * reversed arrays are then displayed.
 */

#include <stdio.h>
#include <stdlib.h>

void reverse_char_array(char arr[], int size)
{
    int start = 0;
    int end = size - 1;
    char temp;

    while (start < end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

void print_char_array(const char *title, const char arr[], int size)
{
    printf("%s", title);
    for (int i = 0; i < size; i++)
    {
        printf("%c", arr[i]);
    }
    printf("\n");
}

int main()
{
    int array_size;

    printf("Enter the number of characters: ");
    if (scanf("%d", &array_size) != 1 || array_size <= 0)
    {
        printf("Error: Invalid input. Please enter a positive integer for the size.\n");
        return 1;
    }

    char *char_array = (char *)malloc(array_size * sizeof(char));
    if (char_array == NULL)
    {
        printf("Error: Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d characters: ", array_size);
    for (int i = 0; i < array_size; i++)
    {
        if (scanf(" %c", &char_array[i]) != 1)
        {
            printf("Error: Failed to read character.\n");
            free(char_array);
            return 1;
        }
    }

    printf("\nCharacter Array Reversal:\n");
    print_char_array("Original Array: ", char_array, array_size);

    reverse_char_array(char_array, array_size);

    print_char_array("Reversed Array: ", char_array, array_size);
    printf("\n");

    free(char_array);

    return 0;
}
