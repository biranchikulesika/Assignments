/*
* Assignment No.: 11
* Question No.: 02
* Date:

* Program: Fibonacci Series Evaluator
* Description: This C program computes and returns the nth Fibonacci number using a user-defined function.
* The position n is entered by the user as run-time input.

* Author: Biranchi Kulesika
* Date: 3rd Feb, 2025
* Version: 1.0
*/

#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;

    printf("Enter the position of the Fibonacci series: ");
    scanf("%d", &n);

    int result = fibonacci(n);

    printf("The %dth Fibonacci number is: %d\n", n, result);

    return 0;
}