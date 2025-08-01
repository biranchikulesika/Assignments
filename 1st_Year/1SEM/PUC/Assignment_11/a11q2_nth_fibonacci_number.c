/*
* Description: This C program computes and returns the nth Fibonacci number using an iterative approach.
* The position n is entered by the user as run-time input.
* Author: Biranchi Kulesika
* Date: 3rd Feb, 2025
* Assignment No.: 11
* Question No.: 02
*/

#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    int a = 0, b = 1, next;
    for (int i = 2; i <= n; i++) {
        next = a + b;
        a = b;
        b = next;
    }
    return b;
}

int main() {
    int n;

    printf("Enter the position of the Fibonacci series: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Fibonacci series is not defined for negative numbers.\n");
    } else {
        int result = fibonacci(n);
        printf("The %dth Fibonacci number is: %d\n", n, result);
    }

    return 0;
}