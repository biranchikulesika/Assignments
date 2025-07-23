/*
 *This C program prints the prime numbers present between 1 and the number entered by the user.
 *
 *Author: Biranchi Kulesika
 *Date:
 *Assignment No.: 07
 *Question No.: 01
 */

#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num)
{
    if (num <= 1)
    {
        return false;
    }
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

void printPrimes(int n)
{
    printf("Prime numbers between 1 and %d are:\n", n);

    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i))
        {
            printf("%d", i);
            printf("\n");
        }
    }
}

int main()
{
    int range;
    printf("Enter the range to find prime numbers: ");
    scanf("%d", &range);

    printPrimes(range);

    return 0;
}