/**
 * @file a1q2_circle_area_perimeter_calculator.c
 * @author Biranchi Kulesika
 * @date 9 Sep 2024
 * @brief Calculates the area and perimeter of a circle.
 *
 * This program prompts the user to enter the radius of a circle and then
 * calculates and displays its area and perimeter. It includes input validation
 * to ensure the radius is a positive number.
 */

#include <stdio.h>

#define PI 3.14159265358979323846

double calculate_area(double radius) {
    return PI * radius * radius;
}

double calculate_perimeter(double radius) {
    return 2 * PI * radius;
}

int main() {
    double radius, area, perimeter;

    printf("Enter the radius of the circle: ");

    if (scanf("%lf", &radius) != 1) {
        printf("Invalid input. Please enter a valid number.\n");
        return 1;
    }

    if (radius <= 0) {
        printf("The radius must be a positive number.\n");
        return 1;
    }

    area = calculate_area(radius);
    perimeter = calculate_perimeter(radius);

    printf("\n--- Circle Properties ---\n");
    printf("Radius:      %.2f units\n", radius);
    printf("Perimeter:   %.2f units\n", perimeter);
    printf("Area:        %.2f square units\n", area);
    printf("-------------------------\n\n");

    return 0;
}