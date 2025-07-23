/*
*Assignment No.: 09
*Question No.: 01
*Date: [empty]

* Program: Right Array Rotator
* Description: this C program rotates to the right by one
* using user define function.

* Author: Biranchi Kulesika
* Date: December 4, 2024
* Version: 1.0
*/

#include <stdio.h>

void right_rotate_array_by_one(int arr[], int size)
{
    int temp = arr[size - 1];

    for (int i = size - 1; i >= 0; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[0] = temp;
}

int main()
{
    int n, i, rt;
    printf("\nEnter the number of elements for the array: ");
    scanf("%d", &n);

    int array[n];

    printf("\nEnter the elements for the array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("\nElements in the array are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%2d ", array[i]);
    }

    printf("\nEnter the number of right roations for the array: ");
    scanf("%d", &rt);

    while (rt)
    {
        right_rotate_array_by_one(array, n);
        rt--;
    }

    printf("\nElements in the array after right rotating once are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}
