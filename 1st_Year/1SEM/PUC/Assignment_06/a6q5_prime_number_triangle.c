/*
* Description: This C program prints a prime number triangle.
* Author: Biranchi Kulesika
* Date: 24 Sep, 2023
* Assignment No.: 06
* Question No.: 05
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

void print_prime_triangle(int rows) {
    int num = 2;

    for (int r = 1; r <= rows; r++) {
        int primes_in_row = 0;
        while (primes_in_row < r) {
            if (isPrime(num)) {
                printf("%4d", num);
                primes_in_row++;
            }
            num++;
        }
        printf("\n");
        num = 2;
    }
}

int main() {
    int rows;

    do {
        printf("Enter the number of rows for the prime triangle: ");
        scanf("%d", &rows);
        if (rows < 1) {
            printf("Please enter a non-zero positive number.\n");
        }
    } while (rows < 1);

    print_prime_triangle(rows);

    return 0;
}
