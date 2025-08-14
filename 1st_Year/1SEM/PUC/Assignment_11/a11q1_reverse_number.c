/**
 * @file a11q1_reverse_number.c
 * @author Biranchi Kulesika
 * @date {empty}
 * @brief Reverses a given integer using a user-defined function.
 *
 * This program prompts the user to enter an integer, validates the input,
 * and then computes and displays its reversed form. The core reversal
 * logic is encapsulated in a separate function for better modularity.
 */
#include <stdio.h>

int reverse_integer(int number)
{
    int reversed_number = 0;
    int remainder;

    while (number != 0)
    {
        remainder = number % 10;
        reversed_number = reversed_number * 10 + remainder;
        number /= 10;
    }
    return reversed_number;
}

int main()
{
    int input_number;
    int reversed_result;

    printf("Enter an integer to reverse: ");
    if (scanf("%d", &input_number) != 1)
    {
        printf("Error: Invalid input. Please enter a valid integer.\n");
        return 1;
    }

    reversed_result = reverse_integer(input_number);

    printf("\nOriginal Number: %d\n", input_number);
    printf("Reversed Number: %d\n", reversed_result);

    return 0;
}