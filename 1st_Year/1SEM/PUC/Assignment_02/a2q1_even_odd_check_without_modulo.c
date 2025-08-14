/**
 * @file a2q1_even_odd_check_without_modulo.c
 * @author Biranchi Kulesika
 * @date 12 Sep 2023
 * @brief Checks if an integer is even or odd without using the modulo operator.
 *
 * This program prompts the user to enter an integer and determines whether it
 * is even or odd by using the bitwise AND operator. It includes input
 * validation to ensure a valid integer is entered.
 */

#include <stdio.h>

int main()
{
    int number;

    printf("Enter an integer: ");

    if (scanf("%d", &number) != 1)
    {
        printf("Invalid input. Please enter a valid integer.\n");
        return 1;
    }

    printf("\n--- Even/Odd Check ---\n");
    if (number & 1)
    {
        printf("Result: %d is an odd number.\n", number);
    }
    else
    {
        printf("Result: %d is an even number.\n", number);
    }
    printf("----------------------\n\n");

    return 0;
}
