/**
 * @file a7q2_perfect_numbers_finder.c
 * @author Biranchi Kulesika
 * @date {empty}
 * @brief Finds and prints all perfect numbers within a user-specified range.
 *
 * A perfect number is a positive integer that is equal to the sum of its
 * proper positive divisors (the sum of its positive divisors excluding
 * the number itself). For example, 6 is a perfect number because its
 * proper divisors are 1, 2, and 3, and 1 + 2 + 3 = 6.
 */

#include <stdio.h>
#include <stdbool.h>

bool is_perfect(int number)
{
    if (number <= 1)
    {
        return false;
    }

    int sum_of_divisors = 1;
    for (int i = 2; i * i <= number; i++)
    {
        if (number % i == 0)
        {
            sum_of_divisors += i;
            if (i * i != number)
            {
                sum_of_divisors += number / i;
            }
        }
    }

    return sum_of_divisors == number;
}

void find_and_print_perfect_numbers(int start, int end)
{
    if (start > end)
    {
        int temp = start;
        start = end;
        end = temp;
    }

    printf("\nPerfect Numbers in Range [%d, %d]:\n", start, end);

    int perfect_count = 0;
    for (int i = start; i <= end; i++)
    {
        if (is_perfect(i))
        {
            printf("%d ", i);
            perfect_count++;
        }
    }

    if (perfect_count == 0)
    {
        printf("No perfect numbers were found in this range.\n");
    }
    else
    {
        printf("\n\nFound %d perfect number(s).\n", perfect_count);
    }

    printf("\n");
}

int main()
{
    int start_range, end_range;

    printf("Enter the start of the range: ");
    if (scanf("%d", &start_range) != 1 || start_range <= 0)
    {
        printf("Error: Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    printf("Enter the end of the range: ");
    if (scanf("%d", &end_range) != 1 || end_range <= 0)
    {
        printf("Error: Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    find_and_print_perfect_numbers(start_range, end_range);

    return 0;
}