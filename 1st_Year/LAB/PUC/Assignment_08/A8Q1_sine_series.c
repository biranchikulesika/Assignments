/*
*Assignment No.: 08
*Question No.: 01
*Date: [empty]

* Program: Sine Series Evaluator
* Description: This program calculates the approx value of sine x
* using Taylor seris method where x is in radians

============================================================

* Author: Biranchi Kulesika
* Date: November 30, 2024
* Version: 1.0
*/

#include <stdio.h>
#include <math.h>

double factorial(int n)
{
    double fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

long double sine_series(long double radians, int terms)
{
    long double result = 0;

    radians = fmod(radians, 2 * M_PI); // reduce the radian in the range of [0, 2π]

    // printf("\nnormalised radian: %Lf", radians);

    for (int i = 0; i < terms; i++)
    {
        int power = 2 * i + 1; // odd powers: 1, 3, 5, 7, ...
        double fact = factorial(power);
        long double term = pow(radians, power) / fact;

        if (i % 2 == 0)
        {
            result += term; // positive term
        }
        else
        {
            result -= term; // negative term
        }
    }
    return result;
}

int main()
{
    long double x;
    int terms;

    printf("Enter the angle in degree: ");
    scanf("%Lf", &x);

    do
    {
        printf("Enter the number of terms in the series (1 to 20): ");
        fflush(stdin);
        scanf("%d", &terms);
    } while (terms < 1 || terms > 20);

    // Converting degrees to radians
    long double radians = x * M_PI / 180.00;

    // printf("\nThe radian value: %Lf", radians);

    long double result = sine_series(radians, terms);

    printf("\nApprox value of sine %.2Lf using %d terms is: %.4Lf\n", x, terms, result);

    return 0;
}