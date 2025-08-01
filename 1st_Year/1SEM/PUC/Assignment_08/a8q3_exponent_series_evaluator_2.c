/*
* Description: This program calculates the exponential series for the given function:
* f(x) = 1 + x + (x^2/2!) + (x^3/3!) + (x^4/4!) + ... up to n terms
* where the value of x and n are given as run-time input.
* Author: Biranchi Kulesika
* Date: December 3, 2024
* Assignment No.: 08
* Question No.: 03
*/

#include <stdio.h>
#include <math.h>

// Function to clear input buffer
void clear_input_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

static long double expo_series(int x, int terms) {
    long double result = 1.0L;
    long double term = 1.0L;

    for (int i = 1; i < terms; i++) {
        term = term * x / i;
        result += term;
    }
    return result;
}

static int getMaxTerms(int x) {
    if (x <= 5) {
        return 20;
    } else if (x <= 15) {
        return 15;
    } else if (x < 35) {
        return 13;
    } else {
        return 9;
    }
}

int main() {
    int x;
    int terms;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    int max_terms = getMaxTerms(x);

    do {
        printf("Enter the number of terms in the series (1 to %d): ", max_terms);
        if (scanf("%d", &terms) != 1) {
            printf("Invalid input. Please enter a number.\n");
            clear_input_buffer();
            terms = 0; // Set to invalid value to repeat loop
        }
        clear_input_buffer();
    } while (terms < 1 || terms > max_terms);

    long double result = expo_series(x, terms);

    printf("The result of f(x) = 1 + x + (x^2/2!) + (x^3/3!) + ... up to %d terms where x = %d is: %.15Lf\n", terms, x, result);

    return 0;
}
