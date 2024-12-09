/*
*This is a C program that checks if a number is an Armstrong number or not using pow()
*
 *Author: Biranchi Kulesika
 *Date:
 *Assignment No.: 06
 *Question No.: 01
 */

#include <stdio.h>
#include <math.h>

int main()
{

    int num, dg, dg_count = 0, temp, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

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
        sum = pow(dg, dg_count) + sum;
        temp /= 10;
    }

    if (sum == num)
    {
        printf("\n%d is a amstrong number.", num);
    }
    else
    {
        printf("\n%d is not a armstrong number.", num);
    }

    return 0;
}

/*NOTE:
*This program may give wrong outputs in vs code due to an error in the MingW C compiler.
*This program works wells in Linux and replit

**List of few Armstrong numbers***
1.  153
2.  370
3.  371
4.  1634
5.  927227
6.  1741725
7.  4210818
8.  9800817
9.  9926315
*/
