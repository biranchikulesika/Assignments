/**
 * @file a11q2_fibonacci_series_evaluator.c
 * @author Biranchi Kulesika
 * @date {empty}
 * @brief Computes the nth Fibonacci number using a recursive function.
 *
 * This program prompts the user for a position 'n' in the Fibonacci
 * sequence. It validates the input to ensure it's a non-negative integer
 * within a practical range for recursion, then computes and displays
 * the corresponding Fibonacci number.
 */

#include <stdio.h>

int calculate_fibonacci(int term_position)
{
	if (term_position <= 1)
		return term_position;
        
	return calculate_fibonacci(term_position - 1) + calculate_fibonacci(term_position - 2);
}

int main()
{
	int term_position;
	int fibonacci_value;

	printf("Enter the position in the Fibonacci series: ");
	if (scanf("%d", &term_position) != 1)
	{
		printf("Error: Invalid input. Please enter a valid integer.\n");
		return 1;
	}

	if (term_position < 0)
	{
		printf("Error: Position cannot be negative.\n");
		return 1;
	}

	if (term_position > 46)
	{
		printf("Error: Input is too large. This recursive implementation is not\n");
		return 1;
	}

	fibonacci_value = calculate_fibonacci(term_position);

	printf("\nThe Fibonacci number at position %d is: %d\n\n", term_position, fibonacci_value);

	return 0;
}