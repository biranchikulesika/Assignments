/**
 * @file a7q1_prime_numbers_printer.c
 * @author Biranchi Kulesika
 * @date {empty}
 * @brief Finds and prints all prime numbers up to a user-specified limit.
 *
 * A prime number is a natural number greater than 1 that has no positive
 * divisors other than 1 and itself. This program prompts the user for an
 * upper limit, validates the input, and then prints all prime numbers
 * from 2 up to that limit in a well-formatted list.
 */

#include <stdio.h>
#include <stdbool.h>

bool is_prime(int number)
{
    if (number <= 1)
    {
        return false;
    }
    for (int i = 2; i * i <= number; i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }
    return true;
}

void print_primes_in_range(int upper_limit)
{
    printf("\nPrime Numbers up to %d\n", upper_limit);
    int prime_count = 0;
    const int primes_per_line = 10;

    for (int i = 2; i <= upper_limit; i++)
    {
        if (is_prime(i))
        {
            printf("%-8d", i);
            prime_count++;
            if (prime_count % primes_per_line == 0)
            {
                printf("\n");
            }
        }
    }

    printf("\n\nFound %d prime number(s) in the specified range.\n", prime_count);
    printf("\n\n");
}

int main()
{
    int upper_limit;
    printf("Enter the upper limit to find prime numbers: ");
    if (scanf("%d", &upper_limit) != 1 || upper_limit < 2)
    {
        printf("Error: Invalid input. Please enter an integer greater than or equal to 2.\n");
        return 1;
    }

    print_primes_in_range(upper_limit);

    return 0;
}