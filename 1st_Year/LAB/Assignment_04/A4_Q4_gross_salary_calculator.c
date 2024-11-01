/*
 *This C program calculates the gross salary of an employee
 *based on their salary and its corresponding TA and DA
 *
 *Author: Biranchi Kulesika
 *Date: 23 Sep, 2023
 *Assignment No.: 04
 *Question No.: 04
 */

#include <stdio.h>

int main() {
  float basic_salary, gross_salary;
  float hra, da;

  // Input the basic salary
  printf("\n\nEnter the basic salary of the employee: ");
  scanf("%f", &basic_salary);

  if (basic_salary <= 10000) {
    hra = 20;
    da = 80;
  } else if (basic_salary <= 20000) {
    hra = 25;
    da = 90;
  } else {
    hra = 30;
    da = 100;
  }

  float hra_da = (hra + da) / 100;

  gross_salary = basic_salary + basic_salary * hra_da;

  printf("\nThe basic salary of the employee is: %.2f", basic_salary);
  printf("\n\nHRA = %.2f%% \t\t DA = %.2f%%", hra, da);
  printf("\n\nThe gross salary of the employee is: %.2f\n\n", gross_salary);

  return 0;
}
