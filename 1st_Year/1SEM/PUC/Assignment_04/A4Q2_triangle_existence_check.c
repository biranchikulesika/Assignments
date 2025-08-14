/**
 * @file a4q2_triangle_existence_check.c
 * @author Biranchi Kulesika
 * @date 23 Sep 2023
 * @brief Checks if a triangle can be formed from three given side lengths.
 *
 * This program prompts the user to enter the lengths of three sides.
 * It then applies the triangle inequality theorem, which states that the
 * sum of the lengths of any two sides of a triangle must be greater
 * than the length of the third side, to determine if a valid
 * triangle can be formed.
 */

#include <stdio.h>

int main() {
    double side_a, side_b, side_c;

    printf("Enter the lengths of the three sides of the triangle:\n");

    printf("Side A: ");
    if (scanf("%lf", &side_a) != 1 || side_a <= 0) {
        printf("Invalid input. Please enter a positive number for the side length.\n");
        return 1;
    }

    printf("Side B: ");
    if (scanf("%lf", &side_b) != 1 || side_b <= 0) {
        printf("Invalid input. Please enter a positive number for the side length.\n");
        return 1;
    }

    printf("Side C: ");
    if (scanf("%lf", &side_c) != 1 || side_c <= 0) {
        printf("Invalid input. Please enter a positive number for the side length.\n");
        return 1;
    }

    printf("\n--- Triangle Existence Check ---\n");
    printf("Sides entered: A=%.2f, B=%.2f, C=%.2f\n", side_a, side_b, side_c);

    if ((side_a + side_b > side_c) && (side_a + side_c > side_b) && (side_b + side_c > side_a)) {
        printf("Result: A valid triangle can be formed.\n");
    } else {
        printf("Result: A valid triangle cannot be formed with these side lengths.\n");
    }
    printf("--------------------------------\n\n");

    return 0;
}
