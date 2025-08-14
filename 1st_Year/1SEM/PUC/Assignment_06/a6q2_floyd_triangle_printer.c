/**
 * @file a6q2_floyd_triangle_printer.c
 * @author Biranchi Kulesika
 * @date 26 Nov 2023
 * @brief Prints Floyd's triangle for a specified number of rows.
 *
 * Floyd's triangle is a right-angled triangular array of natural numbers,
 * created by filling the rows of the triangle with consecutive numbers,
 * starting with 1 in the top left corner. This program prompts the user
 * for the number of rows and prints the corresponding triangle.
 */

#include <stdio.h>

void print_floyd_triangle(int total_rows)
{
    int current_number = 1;

    printf("\nFloyd's Triangle (%d rows)\n\n", total_rows);
    for (int row_index = 0; row_index < total_rows; row_index++)
    {
        for (int col_index = 0; col_index < row_index; col_index++)
        {
            printf("%-5d", current_number);
            current_number++;
        }
        printf("\n\n");
    }
}

int main()
{
    int num_rows;

    printf("Enter the number of rows for Floyd's Triangle: ");
    if (scanf("%d", &num_rows) != 1 || num_rows <= 0)
    {
        printf("Error: Invalid input. Please enter a positive integer for the number of rows.\n");
        return 1;
    }

    print_floyd_triangle(num_rows);

    return 0;
}
