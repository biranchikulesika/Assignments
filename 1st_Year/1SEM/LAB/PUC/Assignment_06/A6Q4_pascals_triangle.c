/*This C program is to print a Pascal's triangle
===========================================================

                            1
                        1       1
                    1       2       1
                1       3       3       1
            1       4       6       4       1
        1       5       10      10      5       1
    1       6       15      20      15      6       1


Reference: https://en.wikipedia.org/wiki/Pascal%27s_triangle
============================================================

 *Author: Biranchi Kulesika
 *Date:
 *Assignment No.: 06
 *Question No.: 04
 */

#include <stdio.h>

// step 1: Calculate factorial
long long factorial(int f)
{
    long long fact = 1;
    for (int i = 2; i <= f; i++)
    {
        fact *= i;
    }
    return fact;
}

// step 2: Calculate nCr (binomial coefficient)
long long nCr(int n, int r)
{
    long long coefficient;
    coefficient = factorial(n) / (factorial(n - r) * factorial(r));
    return coefficient;
}

// Step 3: Print Pascal's Triangle
void printPascalsTriangle(int rows)
{
    if (rows <= 0)
    {
        printf("No rows to display.\n");
        return;
    }

    for (int i = 0; i < rows; i++)
    {
        // Print leading spaces to center-align the triangle
        for (int j = 0; j < rows - i - 1; j++)
        {
            printf("   ");
        }

        // Print values in the row
        for (int j = 0; j <= i; j++)
        {
            printf("%7lld", nCr(i, j));
        }

        printf("\n\n");
    }
}

int main()
{
    int rows;
    printf("\nEnter the number of rows for Pascal's Triangle: ");
    scanf("%d", &rows);

    if (rows <= 0)
    {
        printf("Please enter a positive number for rows.\n");
    }
    else
    {
        printPascalsTriangle(rows);
    }

    return 0;
}

// NOTES:
// I have used %7lld instead of %lld 
// to format the values for alignment