/*
* Description: This C program takes an integer array as input and sorts it in ascending order.
* Author: Biranchi Kulesika
* Date: December 5, 2024
* Assignment No.: 09
* Question No.: 04
*/

#include <stdio.h>
#include <stdlib.h>

void sortArray(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    int *array = (int *)malloc(n * sizeof(int));
    if (array == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d elements for the array:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("\nThe entered elements to the array are:\n");
    printArray(array, n);

    sortArray(array, n);

    printf("\nThe elements in the array after sorting:\n");
    printArray(array, n);

    free(array);

    return 0;
}
