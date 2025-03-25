/*
*Assignment No.: 09
*Question No.: 01
*Date: [empty]

* Program: Left Array Rotator
* Description: this C program rotates to the left by one
* using user define function.

* Author: Biranchi Kulesika
* Date: December 4, 2024
* Version: 1.0
*/

#include <stdio.h>

void left_rotate_array_by_one(int arr[], int size)
{
    int temp = arr[0];

    for (int i = 0; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    arr[size - 1] = temp;
}

int main()
{
    int n, i, sl = 1;
    printf("\nEnter the number of elements for the array: ");
    scanf("%d", &n);

    int array[n];

    printf("\nEnter the elements for the array:\n");
    for (i = 0; i < n; i++)
    {
        printf("po_%2d = ", sl++);
        scanf("%d", &array[i]);
    }

    printf("\nElements in the array are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }

    left_rotate_array_by_one(array, n);

    printf("\nElements in the array after left rotating once are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}
