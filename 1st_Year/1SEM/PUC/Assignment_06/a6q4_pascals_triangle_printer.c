/**
 * @file a6q4_pascals_triangle_printer.c
 * @author Biranchi Kulesika
 * @date {empty}
 * @brief Prints Pascal's triangle for a specified number of rows.
 *
 * Pascal's triangle is a triangular array of binomial coefficients. Each
 * number is the sum of the two directly above it. This program generates
 * the triangle using an efficient iterative method to calculate the
 * coefficients, avoiding large factorial computations that can lead to
 * overflow.
 */

#include <stdio.h>

void print_pascals_triangle(int total_rows)
{
    printf("\nPascal's Triangle (%d rows)\n", total_rows);
    for (int row_index = 0; row_index < total_rows; row_index++)
    {
        for (int space = 0; space < total_rows - row_index - 1; space++)
        {
            printf("   ");
        }

        long long coefficient = 1;
        for (int col_index = 0; col_index <= row_index; col_index++)
        {
            printf("%-6lld", coefficient);
            coefficient = coefficient * (row_index - col_index) / (col_index + 1);
        }
        printf("\n");
    }
    printf("\n\n");
}

int main()
{
    int num_rows;

    printf("Enter the number of rows for Pascal's Triangle: ");
    if (scanf("%d", &num_rows) != 1 || num_rows <= 0)
    {
        printf("Error: Invalid input. Please enter a positive integer for the number of rows.\n");
        return 1;
    }

    print_pascals_triangle(num_rows);

    return 0;
}