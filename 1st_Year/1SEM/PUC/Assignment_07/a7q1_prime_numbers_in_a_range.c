/*
* Description: This C program prints the prime numbers present between 1 and the number entered by the user.
* Author: Biranchi Kulesika
* Assignment No.: 07
* Question No.: 01
*/

#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

void printPrimes(int n) {
    printf("Prime numbers between 1 and %d are: ", n);
    bool first_prime = true;
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            if (!first_prime) {
                printf(", ");
            }
            printf("%d", i);
            first_prime = false;
        }
    }
    printf("\n");
}

int main() {
    int range;
    printf("Enter the range to find prime numbers: ");
    scanf("%d", &range);

    if (range < 2) {
        printf("Please enter a range greater than or equal to 2.\n");
    } else {
        printPrimes(range);
    }

    return 0;
}
