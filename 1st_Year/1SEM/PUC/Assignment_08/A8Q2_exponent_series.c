/*
*Assignment No.: 08
*Question No.: 02
*Date: [empty]

* Program: Exponent Series Evaluator
* Description: This C program evaluates the following series.

    f(x) = 1 + x + x^2 + x^3 + x^4 + ... upto n terms,

* where n is entered by the user as run-time input.

============================================================

* Author: Biranchi Kulesika
* Date: December 2, 2024
* Version: 1.2
*/

#include <stdio.h>
#include <math.h>

int getMaxTerms(int x)
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
    long long sum = 0;
    int n, x, max_terms;

    printf("Enter the value of x (1-100): ");
    scanf("%d", &x);

    max_terms = getMaxTerms(x);

    printf("Enter the number of terms (1-%d): ", max_terms);

    int retry_count = 0;
    while (1)
    {
        scanf("%d", &n);

        if (n <= max_terms && n >= 1)
        {
            break;
        }
        else
        {
            retry_count++;
            if (retry_count >= 3)
            {
                printf("\nProgram terminated due to multiple wrong inputs.\n\n");
                return 0;
            }
            printf("\nCannot calculate for %d terms due to risk of data overflow: ", n);
            printf("\nPlease re-enter the number of terms within 1 - %d: ", max_terms);
        }
    }

    long long term = 1; // First term is x^0 = 1
    for (int i = 0; i < n; i++) {
        sum += term;
        term *= x;
    }

    printf("\nThe result of the series 1 + x + x^2 + x^3 + x^4 + ... up to %d terms is: %lld", n, sum);

    printf("\n\n===Code Execution Successful====\n\n");

    return 0;
}
