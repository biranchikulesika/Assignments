/*
*This is a C program that checks if a number is an Armstrong number or not.
*
 *Author: Biranchi Kulesika
 *Date:
 *Assignment No.: 06
 *Question No.: 01
 */

#include <stdio.h>
#include <math.h>

long long power(int base, int exp)
{
    long long res = 1;
    for (int i = 0; i < exp; i++)
    {
        res *= base;
    }
    return res;
}

int main()
{

    long long num, temp, sum = 0;
    int dg, dg_count = 0;
    printf("Enter a number: ");
    scanf("%lld", &num);

    temp = num;

    while (temp != 0)
    {
        temp /= 10;
        dg_count++;
    }

    temp = num;

    while (temp != 0)
    {
        dg = temp % 10;
        sum += power(dg, dg_count);
        temp /= 10;
    }

    if (sum == num)
    {
        printf("\n%lld is an Armstrong number.", num);
    }
    else
    {
        printf("\n%lld is not an Armstrong number.", num);
    }

    return 0;
}
