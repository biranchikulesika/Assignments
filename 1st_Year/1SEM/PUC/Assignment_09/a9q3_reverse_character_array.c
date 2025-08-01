/*
* Description: This C program inputs a character array and reverses the array.
* Author: Biranchi Kulesika
* Date: December 5, 2024
* Assignment No.: 09
* Question No.: 03
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Enter the number of characters: ");
    scanf("%d", &n);

    char *arr = (char *)malloc(n * sizeof(char));

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    getchar(); // Consume the newline character left by scanf

    printf("Enter %d characters (press Enter after each character):\n", n);
    for (int i = 0; i < n; i++) {
        arr[i] = getchar();
        getchar(); // Consume the newline character
    }

    printf("\nYou entered the characters: ");
    for (int i = 0; i < n; i++) {
        printf("%c", arr[i]);
    }
    printf("\n");

    // Reversing the array
    int start = 0;
    int end = n - 1;
    char temp;

    while (start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

    printf("After reversing: ");
    for (int i = 0; i < n; i++) {
        printf("%c", arr[i]);
    }
    printf("\n");

    free(arr);

    return 0;
}
