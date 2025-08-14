/**
 * @file a7q4_fibonacci_triangle_printer.c
 * @author Biranchi Kulesika
 * @date {empty}
 * @brief Prints a triangle filled with consecutive Fibonacci numbers.
 *
 * This program prompts the user for a number of rows and then prints a
 * triangle where the cells are filled with consecutive numbers from the
 * Fibonacci sequence, starting with 0.
 * For example, for 5 rows:
 * 0
 * 1   1
 * 2   3   5
 * 8   13  21  34
 * 55  89  144 233 377
 */

#include <stdio.h>

void print_fibonacci_triangle(int total_rows)
{
    long long fib_a = 0;
    long long fib_b = 1;

    printf("\nFibonacci Triangle (%d rows):\n\n", total_rows);
    for (int row_index = 1; row_index <= total_rows; row_index++)
    {
        for (int col_index = 1; col_index <= row_index; col_index++)
        {
            printf("%-8lld", fib_a);
            long long next_fib = fib_a + fib_b;
            fib_a = fib_b;
            fib_b = next_fib;
        }
        printf("\n");
    }
    printf("\n");
}

int main()
{
    int num_rows;

    printf("Enter the number of rows for the Fibonacci Triangle: ");
    if (scanf("%d", &num_rows) != 1 || num_rows <= 0)
    {
        printf("Error: Invalid input. Please enter a positive integer for the number of rows.\n");
        return 1;
    }

    print_fibonacci_triangle(num_rows);

    return 0;
}