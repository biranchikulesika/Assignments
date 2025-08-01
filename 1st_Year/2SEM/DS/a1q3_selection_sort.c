/*
* Description: This program sorts an array of floating point values in ascending order using the selection sort algorithm.
* Author: Biranchi Kulesika
* Date: 24 March, 2025
* Assignment No.: 01
* Question No.: 03
*/
#include <stdio.h>
#include <stdlib.h>

void selectionSort(float *arr, int arrSize) {
    for (int i = 0; i < arrSize - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < arrSize; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        // Swap the found minimum element with the first element
        float temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

void printArray(float *arr, int arrSize) {
    for (int i = 0; i < arrSize; i++) {
        printf("%.2f ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid size entered.\n");
        return 1;
    }

    float *arr = (float *)malloc(n * sizeof(float));
    if (!arr) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d elements separated by space:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
    }

    printf("The entered array is:\n");
    printArray(arr, n);

    selectionSort(arr, n);

    printf("The sorted array is:\n");
    printArray(arr, n);

    free(arr);
    return 0;
}
