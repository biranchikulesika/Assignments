/**
 * @file a6q1_armstrong_number_check.c
 * @author Biranchi Kulesika
 * @date 26 Nov 2023
 * @brief Checks if a given integer is an Armstrong number.
 *
 * An Armstrong number (or narcissistic number) is a number that is the sum
 * of its own digits each raised to the power of the number of digits.
 * For example, 153 is an Armstrong number because 1^3 + 5^3 + 3^3 = 153.
 * This program prompts the user for a number, validates the input, and
 * then determines and displays whether it is an Armstrong number.
 */

#include <stdio.h>

long long calculate_power(int base, int exponent)
{
    long long result = 1;
    for (int i = 0; i < exponent; i++)
    {
        result *= base;
    }
    return result;
}
int isArmstrong(int number)
{
    if (number == 0)
        return 1;
    if (number < 0)
        return 0;

    int digit_count = 0;
    int temp = number;
    long long sum = 0;

    while (temp)
    {
        temp /= 10;
        digit_count++;
    }

    temp = number;
    while (temp)
    {
        int digit = temp % 10;
        sum += calculate_power(digit, digit_count);
        temp /= 10;
    }

    return (sum == number) ? 1 : 0;
}

int main()
{
    int input_number;

    printf("Enter a positive integer to check for Armstrong number: ");
    if (scanf("%d", &input_number) != 1 || input_number < 0)
    {
        printf("Error: Invalid input. Please enter a non-negative integer.\n");
        return 1;
    }

    printf("\n--- Armstrong Number Analysis ---\n");
    printf("Input Number : %d\n", input_number);
    printf("Result       : %d is %s Armstrong number\n",
           input_number, isArmstrong(input_number) ? "an" : "NOT an");
    printf("---------------------------------\n\n");

    return 0;
}
