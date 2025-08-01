/*
* Description: This program sorts an array of integers in ascending order using the bubble sort algorithm.
* Author: Biranchi Kulesika
* Date: 24 March, 2025
* Assignment No.: 01
* Question No.: 01
*/
#include <stdio.h>
#include <stdlib.h>

void printArray(int *arr, int arrSize) {
    for (int i = 0; i < arrSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void bubbleSort(int *arr, int arrSize) {
    for (int i = 0; i < arrSize - 1; i++) {
        int swapped = 0;
        for (int j = 0; j < arrSize - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
        if (!swapped) {
            break;
        }
    }
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid size entered.\n");
        return 1;
    }

    int *arr = (int *)malloc(n * sizeof(int));
    if (!arr) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d elements separated by space:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("The entered array is:\n");
    printArray(arr, n);

    bubbleSort(arr, n);

    printf("The sorted array is:\n");
    printArray(arr, n);

    free(arr);
    return 0;
}
