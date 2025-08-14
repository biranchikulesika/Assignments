/**
 * @file a8q1_sine_series_evaluator.c
 * @author Biranchi Kulesika
 * @date {empty}
 * @brief Calculates the value of sin(x) using a Taylor series expansion.
 *
 * This program approximates the value of sin(x) by summing the first 'n'
 * terms of its Taylor series expansion:
 * sin(x) = x - (x^3 / 3!) + (x^5 / 5!) - (x^7 / 7!) + ...
 * The user provides the angle 'x' in degrees and the number of terms 'n'.
 * The program uses an efficient iterative method to calculate the series.
 */

#include <stdio.h>
#include <math.h>

long double calculate_sine_series(long double radians, int num_terms)
{
    radians = fmod(radians, 2 * M_PI);

    long double term = radians;
    long double sum = term;

    for (int i = 1; i < num_terms; i++)
    {
        long double factor = -1.0 * radians * radians / ((2 * i) * (2 * i + 1));
        term *= factor;
        sum += term;
    }
    return sum;
}

int main()
{
    double angle_degrees;
    int num_terms;

    printf("Enter the angle in degrees: ");
    if (scanf("%lf", &angle_degrees) != 1)
    {
        printf("Error: Invalid input. Please enter a valid number for the angle.\n");
        return 1;
    }

    printf("Enter the number of terms for the series (1 to 20): ");
    if (scanf("%d", &num_terms) != 1 || num_terms < 1 || num_terms > 20)
    {
        printf("Error: Invalid input. Number of terms must be between 1 and 20.\n");
        return 1;
    }

    long double radians = angle_degrees * M_PI / 180.0;
    long double series_result = calculate_sine_series(radians, num_terms);
    double math_lib_result = sin(radians);

    printf("\nSine Series Evaluation\n");
    printf("Input Angle      : %.2f degrees\n", angle_degrees);
    printf("Number of Terms  : %d\n", num_terms);

    printf("--------------------------------\n");

    printf("Series Result    : %.15Lf\n", series_result);
    printf("Math Library sin(): %.15f\n", math_lib_result);
    printf("--------------------------------\n\n");

    return 0;
}