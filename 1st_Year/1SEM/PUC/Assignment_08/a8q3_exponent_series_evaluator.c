/**
 * @file a8q3_exponent_series_evaluator.c
 * @author Biranchi Kulesika
 * @date {empty}
 * @brief Calculates the value of e^x using a Taylor series expansion.
 *
 * This program approximates the value of e^x by summing the first 'n'
 * terms of its Taylor series expansion:
 * e^x = 1 + x + (x^2 / 2!) + (x^3 / 3!) + ...
 * The user provides the real number 'x' and the number of terms 'n'.
 * The program includes input validation and compares the result with the
 * standard library's exp() function.
 */

#include <stdio.h>
#include <math.h>

long double calculate_exponential_series(double x, int num_terms)
{
    long double sum = 1.0L;
    long double term = 1.0L;

    for (int i = 1; i < num_terms; i++)
    {
        term = term * x / i;
        sum += term;
    }
    return sum;
}

int get_max_safe_terms(double x)
{
    if (x <= 5)
    {
        return 20;
    }
    else if (x <= 15)
    {
        return 15;
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
    double x;
    int num_terms;
    const int MAX_RETRIES = 3;

    printf("Enter the value for x (the exponent): ");
    if (scanf("%lf", &x) != 1)
    {
        printf("Error: Invalid input. Please enter a valid number.\n");
        return 1;
    }

    int max_terms = get_max_safe_terms(fabs(x));

    printf("Enter the number of terms for the series (1 to %d): ", max_terms);

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

    long double series_result = calculate_exponential_series(x, num_terms);
    double math_lib_result = exp(x);

    printf("\nExponential Series Evaluation:\n");
    printf("Input Value (x)  : %.4f\n", x);
    printf("Number of Terms  : %d\n", num_terms);
    printf("-------------------------------------\n");
    printf("Series Result     : %.15Lf\n", series_result);
    printf("Math Library exp(): %.15f\n", math_lib_result);
    printf("-------------------------------------\n\n");

    return 0;
}
