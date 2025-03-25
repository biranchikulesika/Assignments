/*
*Assignment No.: 09
*Question No.: 03
*Date: [empty]

* Program: Reverse an Array of Characters.
* Description: this C program inputs an character array and reverse the array

* Author: Biranchi Kulesika
* Date: December 5, 2024
* Version: 1.0
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Enter the number of characters: ");
    scanf("%d", &n);

    // Dynamic memory allocation
    char *arr = (char *)malloc(n * sizeof(char));

    if (arr == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1; // Exit if memory allocation fails
    }

    // Clear input buffer
    getchar();

    printf("Enter %d characters:\n", n);
    for (int i = 0; i < n; i++)
    {
        arr[i] = getchar();
        getchar();
    }

    printf("\nYou entered the characters: ");
    for (int i = 0; i < n; i++)
    {
        printf("%c", arr[i]);
    }

    // Reversing the array
    int start = 0;
    int end = n - 1;
    int temp;

    while (start < end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

    // Print the reversed array
    printf("\nAfter reversing: ");
    for (int i = 0; i < n; i++)
    {
        printf("%c", arr[i]);
    }

    // Free dynamically allocated memory
    free(arr);

    return 0;
}
