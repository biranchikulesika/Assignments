/*
* Description: A C program to calculate the percentage and find the grade
* based on the marks entered for various subjects
* such that phy, chem, math, bio, and computer.
* Author: Biranchi Kulesika
* Date: 23 Sep, 2023
* Assignment No.: 04
* Question No.: 03
*/

#include <stdio.h>

// Function to get a valid mark (0-100) for a subject
float get_valid_mark(const char *subject_name) {
    float mark;
    while (1) {
        printf("%s: ", subject_name);
        if (scanf("%f", &mark) == 1 && mark >= 0 && mark <= 100) {
            break;
        } else {
            printf("Marks cannot be negative or exceed 100 for each subject. Please enter the marks again.\n\n");
            // Clear input buffer
            while (getchar() != '\n');
        }
    }
    return mark;
}

int main() {
    float phy, chem, math, bio, comp, total_marks, percentage;
    char grade;

    printf("Enter marks for the following subjects:\n");

    phy = get_valid_mark("Physics");
    chem = get_valid_mark("Chemistry");
    math = get_valid_mark("Math");
    bio = get_valid_mark("Biology");
    comp = get_valid_mark("Computer Science");

    printf("\nMarks you entered are:\nPhysics: %.2f\nChemistry: %.2f\nMathematics: %.2f\nBiology: %.2f\nComputer Science: %.2f\n",
           phy, chem, math, bio, comp);

    total_marks = phy + chem + math + bio + comp;
    percentage = total_marks / 5;

    if (percentage >= 90) {
        grade = 'A';
    } else if (percentage >= 80) {
        grade = 'B';
    } else if (percentage >= 70) {
        grade = 'C';
    } else if (percentage >= 60) {
        grade = 'D';
    } else if (percentage >= 40) {
        grade = 'E';
    } else {
        grade = 'F';
    }

    printf("\nTotal Marks = %.2f\n", total_marks);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade: %c\n", grade);

    return 0;
}
