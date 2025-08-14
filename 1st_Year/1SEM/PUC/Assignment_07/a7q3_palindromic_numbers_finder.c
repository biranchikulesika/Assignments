/**
 * @file a7q3_palindromic_numbers_finder.c
 * @author Biranchi Kulesika
 * @date {empty}
 * @brief Finds and prints all palindromic numbers within a user-specified range.
 *
 * A palindromic number is a number that reads the same backward as forward,
 * such as 121 or 9009. This program prompts the user for a start and end
 * of a range, validates the input, and then finds and prints all
 * palindromic numbers within that range.
 */

#include <stdio.h>
#include <stdbool.h>

bool is_palindrome(int number)
{
    if (number < 0)
    {
        return false;
    }

    int original_number = number;
    int reversed_number = 0;

    while (number != 0)
    {
        int digit = number % 10;
        reversed_number = reversed_number * 10 + digit;
        number /= 10;
    }

    return original_number == reversed_number;
}

void find_and_print_palindromes(int start, int end)
{
    if (start > end)
    {
        int temp = start;
        start = end;
        end = temp;
    }

    printf("\nPalindromic Numbers in Range [%d, %d]:\n", start, end);

    int palindrome_count = 0;
    const int numbers_per_line = 10;

    for (int i = start; i <= end; i++)
    {
        if (is_palindrome(i))
        {
            printf("%-8d", i);
            palindrome_count++;
            if (palindrome_count % numbers_per_line == 0)
            {
                printf("\n");
            }
        }
    }

    if (palindrome_count == 0)
    {
        printf("No palindromic numbers were found in this range.\n");
    }
    else
    {
        printf("\n\nFound %d palindromic number(s).\n", palindrome_count);
    }

    printf("\n\n");
}

int main()
{
    int start_range, end_range;

    printf("Enter the start of the range: ");
    if (scanf("%d", &start_range) != 1 || start_range < 0)
    {
        printf("Error: Invalid input. Please enter a non-negative integer.\n");
        return 1;
    }

    printf("Enter the end of the range: ");
    if (scanf("%d", &end_range) != 1 || end_range < 0)
    {
        printf("Error: Invalid input. Please enter a non-negative integer.\n");
        return 1;
    }

    find_and_print_palindromes(start_range, end_range);

    return 0;
}
