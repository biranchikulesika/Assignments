/*
* Description: This C program calculates the gross salary of an employee
* based on their salary and its corresponding HRA and DA.
* Author: Biranchi Kulesika
* Date: 23 Sep, 2023
* Assignment No.: 04
* Question No.: 04
*/

#include <stdio.h>

int main() {
    float basic_salary, gross_salary;
    float hra_percent, da_percent;

    printf("Enter the basic salary of the employee: ");
    scanf("%f", &basic_salary);

    if (basic_salary <= 10000) {
        hra_percent = 20;
        da_percent = 80;
    } else if (basic_salary <= 20000) {
        hra_percent = 25;
        da_percent = 90;
    } else {
        hra_percent = 30;
        da_percent = 100;
    }

    float hra_amount = basic_salary * (hra_percent / 100.0);
    float da_amount = basic_salary * (da_percent / 100.0);
    gross_salary = basic_salary + hra_amount + da_amount;

    printf("\nBasic Salary: %.2f\n", basic_salary);
    printf("HRA (%.0f%%): %.2f\n", hra_percent, hra_amount);
    printf("DA (%.0f%%): %.2f\n", da_percent, da_amount);
    printf("Gross Salary: %.2f\n", gross_salary);

    return 0;
}
