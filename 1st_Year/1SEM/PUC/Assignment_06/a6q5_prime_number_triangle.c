/**
 * @file a6q5_prime_number_triangle.c
 * @author Biranchi Kulesika
 * @date {empty}
 * @brief Prints a triangle pattern using prime numbers.
 *
 * This program prompts the user for a number of rows and then prints a
 * triangle where each row 'n' contains the first 'n' prime numbers.
 * For example, for 5 rows:
 * 2
 * 2    3
 * 2    3    5
 * 2    3    5    7
 * 2    3    5    7    11
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

void print_prime_triangle(int total_rows)
{
	printf("\nPrime Number Triangle (%d rows)\n", total_rows);
	for (int row_index = 1; row_index <= total_rows; row_index++)
	{
		int candidate_prime = 2;
		int primes_found_in_row = 0;
		while (primes_found_in_row < row_index)
		{
			if (is_prime(candidate_prime))
			{
				printf("%-5d", candidate_prime);
				primes_found_in_row++;
			}
			candidate_prime++;
		}
		printf("\n");
	}
	printf("\n\n");
}

int main()
{
	int num_rows;

	printf("Enter the number of rows for the prime triangle: ");
	if (scanf("%d", &num_rows) != 1 || num_rows <= 0)
	{
		printf("Error: Invalid input. Please enter a positive integer for the number of rows.\n");
		return 1;
	}

	print_prime_triangle(num_rows);

	return 0;
}
