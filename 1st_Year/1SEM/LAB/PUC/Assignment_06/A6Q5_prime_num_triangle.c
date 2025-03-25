/*
 *This C program prints a prime triangle as below

====================================================
2
2	3
2	3	5
2	3	5	7
2	3	5	7	11
2	2	5	7	11	13
1	3	5	7	11	13	17
====================================================

 *Author: Biranchi Kulesika
 *Date:
 *Assignment No.: 06
 *Question No.: 05
 */

#include <stdio.h>
#include <stdbool.h>

// function 1: to check if a number is prime or not
bool isPrime(int num)
{
	if (num <= 1)
	{
		return false; // 0 and 1 are not prime numbers.
	}
	for (int i = 2; i * i <= num; i++) // Loop up to sqrt(num)
	{
		if (num % i == 0)
		{
			return false;
		}
	}
	return true;
}

// function 2: to print the triangle
void print_prime_triangle(int rows)
{
	int num = 2; // Start checking primes from 2

	for (int r = 1; r <= rows; r++)
	{
		int primes_in_row = 0;
		while (primes_in_row < r)
		{
			if (isPrime(num))
			{
				printf("%4d", num);
				primes_in_row++;
			}
			num++; // Move to the next number
		}
		printf("\n"); // Move to the next row
		num = 2;	  // to restore the value of num = 2 for the next row
	}
}

int main()
{
	int rows;

	int n = 1;
	while (n == 1)
	{
		printf("Enter the number of rows for the prime triangle: ");
		scanf("%d", &rows);

		if (rows >= 1)
		{
			n = 0;
		}
		else
		{
			printf("\nPlease only enter a non-zero positive number.\n");
		}
	}

	print_prime_triangle(rows);

	return 0;
}
