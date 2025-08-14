/**
 * @file a6q3_fibonacci_triangle_printer.c
 * @author Biranchi Kulesika
 * @date {empty}
 * @brief Prints a triangle pattern based on the Fibonacci sequence.
 *
 * This program prompts the user for a number of rows and then prints a
 * triangle where each row 'n' contains the first 'n' numbers of the
 * Fibonacci sequence (starting from 1).
 * For example, for 6 rows:
 * 1
 * 1   2
 * 1   2   3
 * 1   2   3   5
 * 1   2   3   5   8
 * 1   2   3   5   8  13
 */

#include <stdio.h>

void print_fibonacci_triangle(int total_rows)
{
    printf("\nFibonacci Triangle (%d rows)\n", total_rows);
    for (int row_index = 0; row_index < total_rows; row_index++)
    {
        long long fib_a = 0;
        long long fib_b = 1;
        for (int col_index = 0; col_index < row_index; col_index++)
        {
            long long next_fib = fib_a + fib_b;
            printf("%-5lld", next_fib);
            fib_a = fib_b;
            fib_b = next_fib;
        }
        printf("\n");
    }
    printf("\n\n");
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
