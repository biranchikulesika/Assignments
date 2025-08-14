/**
 * @file a11q3_hcf_calculator.c
 * @author Biranchi Kulesika
 * @date {empty}
 * @brief Calculates the Highest Common Factor (HCF) of two integers.
 *
 * This program prompts the user for two integers, validates the input,
 * and then computes their HCF (also known as Greatest Common Divisor or GCD)
 * using the Euclidean algorithm implemented in a recursive function.
 */

#include <stdio.h>
#include <stdlib.h>

int calculate_hcf(int a, int b)
{
    if (b == 0)
        return a;

    return calculate_hcf(b, a % b);
}

int main()
{
    int first_number, second_number;

    printf("HCF (GCD) Calculator:\n\n");
    printf("Enter the first integer: ");
    if (scanf("%d", &first_number) != 1)
    {
        printf("\nError: Invalid input. Please enter a valid integer.\n");
        return 1;
    }

    printf("Enter the second integer: ");
    if (scanf("%d", &second_number) != 1)
    {
        printf("\nError: Invalid input. Please enter a valid integer.\n");
        return 1;
    }

    printf("\nThe HCF of %d and %d is: %d\n\n", first_number, second_number, calculate_hcf(abs(first_number), abs(second_number)));

    return 0;
}