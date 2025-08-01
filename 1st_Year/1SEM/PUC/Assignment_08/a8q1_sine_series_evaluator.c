/*
* Description: This program calculates the approximate value of sine x
* using Taylor series expansion where x is in degrees.
* Author: Biranchi Kulesika
* Date: November 30, 2024
* Assignment No.: 08
* Question No.: 01
*/

// Define _USE_MATH_DEFINES to get math constants like M_PI on Windows/MSVC
#define _USE_MATH_DEFINES

#include <stdio.h>
#include <math.h>

#define MAX_TERMS 20

void clear_input_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

/*
 * This is an optimized version of the sine series calculation.
 * It avoids repeated calls to pow() and factorial() by calculating
 * each term based on the previous one.
 * The relationship is: term_i = term_{i-1} * (-1) * x^2 / ((2*i) * (2*i+1))
 */
static long double sine_series(long double radians, int terms) {

    radians = fmod(radians, 2 * M_PI);

    long double result = radians;
    long double term = radians;

    for (int i = 1; i < terms; i++) {
        term *= -1.0L * radians * radians / ((2 * i) * (2 * i + 1));
        result += term;
    }
    return result;
}

int main() {
    long double x;
    int terms = 0;

    printf("Enter the angle in degrees: ");
    while (scanf("%Lf", &x) != 1) {
        printf("Invalid input. Please enter a valid number for the angle: ");
        clear_input_buffer();
    }
    clear_input_buffer();

    do {
        printf("Enter the number of terms in the series (1 to %d): ", MAX_TERMS);
        if (scanf("%d", &terms) != 1) {
            printf("Invalid input. Please enter a number.\n");
            clear_input_buffer();
        } else {
            clear_input_buffer();
        }
    } while (terms < 1 || terms > MAX_TERMS);

    long double radians = x * M_PI / 180.0L;

    long double result = sine_series(radians, terms);

    printf("\nApprox value of sin(%.2Lf) using %d terms is: %.15Lf\n", x, terms, result);
    printf("Value from math.h sinl() is:          %.15Lf\n", sinl(radians));

    return 0;
}
