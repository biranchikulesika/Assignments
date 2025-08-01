/*
* Description: This C program evaluates the series f(x) = 1 + x + x^2 + x^3 + x^4 + ... upto n terms.
* Author: Biranchi Kulesika
* Date: December 2, 2024
* Assignment No.: 08
* Question No.: 02
*/

#include <stdio.h>
#include <math.h>

// Function to clear input buffer
void clear_input_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

static int getMaxTerms(int x) {
    if (x <= 5) {
        return 32;
    } else if (x <= 15) {
        return 16;
    } else if (x < 35) {
        return 13;
    } else {
        return 9;
    }
}

int main() {
    long long sum = 0;
    int n, x, max_terms;

    printf("Enter the value of x (1-100): ");
    scanf("%d", &x);

    max_terms = getMaxTerms(x);

    do {
        printf("Enter the number of terms (1-%d): ", max_terms);
        if (scanf("%d", &n) != 1) {
            printf("Invalid input. Please enter a number.\n");
            clear_input_buffer();
            n = 0; // Set to invalid value to repeat loop
        }
        clear_input_buffer();
    } while (n < 1 || n > max_terms);

    long long term = 1;
    for (int i = 0; i < n; i++) {
        sum += term;
        term *= x;
    }

    printf("The result of the series 1 + %d + %d^2 + ... up to %d terms is: %lld\n", x, x, n, sum);

    return 0;
}
