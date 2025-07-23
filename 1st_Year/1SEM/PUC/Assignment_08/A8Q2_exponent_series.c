/*
*Assignment No.: 08
*Question No.: 02
*Date: [empty]

* Program: Exponent Series Evaluator
* Description: Thid C program evaluates the following series.

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

    int l = 1;
    int count = 0;
    while (l == 1)
    {
        scanf("%d", &n);

        if (n <= max_terms && n >= 1)
        {
            l = 0;
        }
        else
        {
            if (count == 3)
            {
                printf("\nProgram terminated due to multiple wrong inputs.\n\n");
                return 0;
            }
            printf("\nCannot calculate for %d terms due to risk of data overflow: ", n);
            printf("\nPlease re-enter the number of terms within 1 - %d: ", max_terms);
            count++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        sum += pow(x, i);
    }

    printf("\nThe result of the series 1 + x + x^2 + x^3 + x^4 + ... up to %d terms is: %lld", n, sum);

    printf("\n\n===Code Execution Successful====\n\n");

    return 0;
}
