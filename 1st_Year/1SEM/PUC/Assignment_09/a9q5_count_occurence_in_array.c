/*
* Description: This C program counts the number of occurrences a key has in an array of natural numbers.
* Author: Biranchi Kulesika
* Date: December 5, 2024
* Assignment No.: 09
* Question No.: 05
*/

#include <stdio.h>
#include <stdlib.h>

// Function to clear input buffer
void clear_input_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void findOccurrences(int arr[], int size) {
    int key, count = 0;

    printf("\nEnter the number to search for: ");
    scanf("%d", &key);

    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            count++;
        }
    }

    if (count == 0) {
        printf("\nNo occurrences of %d found in the array.\n", key);
    } else {
        printf("\nFound %d occurrence(s) of %d in the array.\n", count, key);
    }
}

void displayArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;

    do {
        printf("Enter the number of elements in the array (>= 1): ");
        if (scanf("%d", &n) != 1) {
            printf("Invalid input. Please enter a number.\n");
            clear_input_buffer();
            n = 0; // Set to invalid value to repeat loop
        }
        clear_input_buffer();
    } while (n < 1);

    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed. Exiting...\n");
        return 1;
    }

    printf("Enter %d elements of the array:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nArray contents: ");
    displayArray(arr, n);

    findOccurrences(arr, n);

    free(arr);
    return 0;
}
