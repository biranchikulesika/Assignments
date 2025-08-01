/*
* Description: This C program rotates an array to the right by one or more positions.
* Author: Biranchi Kulesika
* Date: December 4, 2024
* Assignment No.: 09
* Question No.: 02
*/

#include <stdio.h>

void right_rotate_array_by_one(int arr[], int size) {
    int temp = arr[size - 1];
    for (int i = size - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;
}

int main() {
    int n, i, rotations;
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

    printf("Enter the number of right rotations for the array: ");
    scanf("%d", &rotations);

    for (int k = 0; k < rotations; k++) {
        right_rotate_array_by_one(array, n);
    }

    printf("Elements in the array after %d right rotation(s):\n", rotations);
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
