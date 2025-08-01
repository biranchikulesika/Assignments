/*
* Description: This C program finds the roots of the quadratic equation ax^2 + bx + c = 0,
* where a, b and are given as run-time input.
* Author: Biranchi Kulesika
* Date: 12 Sep, 2023
* Assignment No.: 02
* Question No.: 03
*/

#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, discriminant, realPart, imagPart;

    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        printf("Coefficient 'a' cannot be zero.\n");
        return 1;
    }

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        printf("Roots are real and different.\n");
        printf("Root 1 = %.2lf\n", (-b + sqrt(discriminant)) / (2 * a));
        printf("Root 2 = %.2lf\n", (-b - sqrt(discriminant)) / (2 * a));
    } else if (discriminant == 0) {
        printf("Roots are real and same.\n");
        printf("Root 1 = Root 2 = %.2lf\n", -b / (2 * a));
    } else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and different.\n");
        printf("Root 1 = %.2lf + %.2lfi\n", realPart, imagPart);
        printf("Root 2 = %.2lf - %.2lfi\n", realPart, imagPart);
    }

    return 0;
}
