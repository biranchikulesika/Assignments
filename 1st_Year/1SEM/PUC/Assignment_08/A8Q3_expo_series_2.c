/*
* Assignment No.: 08
* Question No.: 03
* Date: [empty]

* Program: Exponent Series Evaluator (2)
* Description:
*   This program calculates the exponential series for the given function:
*   f(x) = 1 + x + (x^2/2!) + (x^3/3!) + (x^4/4!) + ... up to n terms
*   where the value of x and n are given as run-time input.

* Author: Biranchi Kulesika
* Date: December 3, 2024
* Version: 1.0
*/

#include <stdio.h>
#include <math.h>

long double factorial(int n)
{
    long double fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

long double expo_series(int x, int terms)
{
    long double result = 0;

    for (int i = 0; i < terms; i++)
    {
        long double fact = factorial(i);
        long double term = pow(x, i) / fact;

        result += term;
    }
    return result;
}

int getMaxTerms(int x)
{
    if (x <= 5)
    {
        return 15;
    }
    else if (x <= 15)
    {
        return 10;
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
    int x;
    int terms;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    int max_terms = getMaxTerms(x);

    printf("Enter the number of terms in the series (1 to %d): ", max_terms);

    int retry_count = 0;
    while (1)
    {
        scanf("%d", &terms);

        if (terms >= 1 && terms <= max_terms)
        {
            break;
        }
        else
        {
            retry_count++;
            if (retry_count >= 3)
            {
                printf("\nProgram terminated due to multiple wrong inputs.\n\n");
                return 0; // Terminate after 3 invalid attempts
            }
            printf("Invalid input! Please enter a number between 1 and %d: ", max_terms);
        }
    }

    long double result = expo_series(x, terms);

    printf("\nThe result of f(x) = 1 + x + (x^2/2!) + (x^3/3!) + ... up to %d terms where x = %d is: %.15Lf\n", terms, x, result);

    return 0;
}
