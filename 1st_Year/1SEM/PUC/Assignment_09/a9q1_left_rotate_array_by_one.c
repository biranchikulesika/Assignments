/*
* Description: This C program rotates an array to the left by one position.
* Author: Biranchi Kulesika
* Date: December 4, 2024
* Assignment No.: 09
* Question No.: 01
*/

#include <stdio.h>

void left_rotate_array_by_one(int arr[], int size) {
    int temp = arr[0];
    for (int i = 0; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    arr[size - 1] = temp;
}

int main() {
    int n, i;
    printf("Enter the number of elements for the array: ");
    scanf("%d", &n);

    int array[n]; // VLA (Variable Length Array) - C99 feature

    printf("Enter %d elements for the array:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("\nElements in the array before rotation:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    left_rotate_array_by_one(array, n);

    printf("Elements in the array after left rotating once:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
