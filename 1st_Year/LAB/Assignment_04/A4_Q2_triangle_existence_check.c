/*
 *A C program to check whether a triangle is possible
 * based on three sides entered by the user.
 *
 *Author: Biranchi Kulesika
 *Date: 23 Sep, 2023
 *Assignment No.: 04
 *Question No.: 02
 */

#include <stdio.h>

int main()
{
    int a, b, c;

    printf("\n\nEnter the three side of the triangle:");
    printf("\na = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    printf("c = ");
    scanf("%d", &c);

    // The sum of any two side of a triangle is always greater than the third side.
    if ((a + b) > c && (a + c) > b && (b + c) > a)
    {
        printf("\nTriangle with the sides %d, %d and %d exists.\n\n", a, b, c);
    }
    else
    {
        printf("\nTriangle with the sides %d, %d and %d doesnt exist.\n\n", a, b, c);
    }
    return 0;
}
