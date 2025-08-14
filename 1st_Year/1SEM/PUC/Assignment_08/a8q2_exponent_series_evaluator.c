/**
 * @file a8q2_exponent_series_evaluator.c
 * @author Biranchi Kulesika
 * @date {empty}
 * @brief Evaluates a geometric series.
 *
 * This program calculates the sum of a geometric series:
 * S = 1 + x + x^2 + x^3 + ... + x^(n-1)
 * The user provides the base 'x' and the number of terms 'n'. The program
 * includes input validation and dynamically suggests a maximum number of
 * terms to prevent integer overflow.
 */

#include <stdio.h>

long long calculate_geometric_series(int x, int num_terms)
{
    long long sum = 0;
    long long term = 1;
    for (int i = 0; i < num_terms; i++)
    {
        sum += term;
        term *= x;
    }
    return sum;
}

int get_max_safe_terms(int x)
{
    if (x <= 5)
    {
        return 32;
    }
    else if (x <= 15)
    {
        return 16;
    }
    else if (x < 35)
    {
        return 13;
    }
    else
    {
        return 9;
    }
}

int main()
{
    int x, num_terms;
    int max_terms;
    const int MAX_RETRIES = 3;

    printf("Enter the value for x (base of the series): ");
    if (scanf("%d", &x) != 1)
    {
        printf("Error: Invalid input. Please enter a valid integer.\n");
        return 1;
    }

    max_terms = get_max_safe_terms(x);
    printf("Enter the number of terms (1-%d): ", max_terms);

    int retry_count = 0;
    while (1)
    {
        int scan_result = scanf("%d", &num_terms);

        if (scan_result == 1 && num_terms >= 1 && num_terms <= max_terms)
        {
            break;
        }

        while (getchar() != '\n')
            ;

        retry_count++;
        if (retry_count >= MAX_RETRIES)
        {
            printf("\nMaximum retries reached. Program terminated.\n");
            return 1;
        }
        printf("Invalid input. Please re-enter a number between 1 and %d: ", max_terms);
    }

    long long sum = calculate_geometric_series(x, num_terms);

    printf("\nGeometric Series Evaluation:\n");
    printf("Base (x)         : %d\n", x);
    printf("Number of Terms  : %d\n", num_terms);
    printf("Series Sum       : %lld\n", sum);

    return 0;
}
