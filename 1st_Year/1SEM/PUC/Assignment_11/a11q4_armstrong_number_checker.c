/**
 * @file a11q4_armstrong_number_checker.c
 * @author Biranchi Kulesika
 * @date {empty}
 * @brief Checks if a given integer is an Armstrong number.
 *
 * This program prompts the user for an integer, validates the
 * input, and then determines if it is an Armstrong number. An Armstrong
 * number is an integer that is equal to the sum of its own digits each
 * raised to the power of the number of digits.
 */
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

long long calculate_power(int base, int exponent)
{
    long long result = 1;
    for (int i = 0; i < exponent; i++)
    {
        result *= base;
    }
    return result;
}

bool isArmstrong(int number)
{
    if (number < 0)
    {
        return false;
    }

    int temp_number = number;
    int digit_count = 0;
    int remainder;
    long long sum_of_powers = 0;

    if (number == 0)
    {
        return true;
    }

    while (temp_number != 0)
    {
        temp_number /= 10;
        digit_count++;
    }

    temp_number = number;

    while (temp_number != 0)
    {
        remainder = temp_number % 10;
        sum_of_powers += calculate_power(remainder, digit_count);
        temp_number /= 10;
    }

    return sum_of_powers == number;
}

int main()
{
    int input_number;

    printf("Enter an integer to check if it's an Armstrong number: ");
    if (scanf("%d", &input_number) != 1)
    {
        printf("\nError: Invalid input. Please enter a valid integer.\n");
        return 1;
    }

    printf("Result %d is %s Armstrong number.\n\n",
           input_number, isArmstrong(input_number) ? "an" : "NOT an");

    return 0;
}