/**
 * @file a4q4_gross_salary_calculator.c
 * @author Biranchi Kulesika
 * @date 23 Sep 2023
 * @brief Calculates the gross salary of an employee based on their basic salary.
 *
 * This program prompts the user for an employee's basic salary.
 * It then calculates the House Rent Allowance (HRA) and Dearness Allowance (DA)
 * as percentages of the basic salary, based on predefined salary slabs.
 * Finally, it computes and displays the gross salary.
 */

#include <stdio.h>

int main() {
    float basic_salary, gross_salary;
    float hra_percent, da_percent;
    float hra_amount, da_amount;

    printf("Enter the basic salary of the employee: ");
    if (scanf("%f", &basic_salary) != 1) {
        printf("Invalid input. Please enter a valid number.\n");
        return 1;
    }

    if (basic_salary < 0) {
        printf("Basic salary cannot be negative. Please enter a positive value.\n");
        return 1;
    }

    if (basic_salary <= 10000.0f) {
        hra_percent = 20.0f;
        da_percent = 80.0f;
    } else if (basic_salary <= 20000.0f) {
        hra_percent = 25.0f;
        da_percent = 90.0f;
    } else {
        hra_percent = 30.0f;
        da_percent = 100.0f;
    }

    hra_amount = basic_salary * (hra_percent / 100.0f);
    da_amount = basic_salary * (da_percent / 100.0f);
    gross_salary = basic_salary + hra_amount + da_amount;

    printf("\n--- Gross Salary Calculation ---\n");
    printf("Basic Salary:         %10.2f\n", basic_salary);
    printf("----------------------------------\n");
    printf("HRA (%.0f%%):           %10.2f\n", hra_percent, hra_amount);
    printf("DA (%.0f%%):            %10.2f\n", da_percent, da_amount);
    printf("----------------------------------\n");
    printf("Gross Salary:         %10.2f\n", gross_salary);
    printf("----------------------------------\n\n");

    return 0;
}
