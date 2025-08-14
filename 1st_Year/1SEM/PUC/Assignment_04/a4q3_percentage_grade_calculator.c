/**
 * @file a4q3_percentage_grade_calculator.c
 * @author Biranchi Kulesika
 * @date 23 Sep 2023
 * @brief Calculates percentage and assigns a grade based on subject marks.
 *
 * This program prompts the user to enter marks for five subjects.
 * It validates that each mark is between 0 and 100. It then calculates
 * the total marks, percentage, and assigns a final grade based on the
 * percentage achieved.
 */

#include <stdio.h>

float get_validated_marks(const char *subject_name)
{
    float marks = -1.0f;
    int scanf_result;

    do
    {
        printf("%-18s: ", subject_name);
        scanf_result = scanf("%f", &marks);

        if (scanf_result != 1)
        {
            while (getchar() != '\n')
                ;
            printf("Invalid input. Please enter a number.\n");
            marks = -1.0f;
        }
        else if (marks < 0 || marks > 100)
        {
            printf("Marks must be between 0 and 100. Please try again.\n");
        }
    } while (marks < 0 || marks > 100);

    return marks;
}

int main()
{
    float physics_marks, chemistry_marks, math_marks, biology_marks, computer_marks;
    float total_marks, percentage;
    char grade;

    printf("Enter marks for the following subjects (0-100):\n");

    physics_marks = get_validated_marks("Physics");
    chemistry_marks = get_validated_marks("Chemistry");
    math_marks = get_validated_marks("Mathematics");
    biology_marks = get_validated_marks("Biology");
    computer_marks = get_validated_marks("Computer Science");

    total_marks = physics_marks + chemistry_marks + math_marks + biology_marks + computer_marks;
    percentage = total_marks / 5.0f;

    if (percentage >= 90)
    {
        grade = 'A';
    }
    else if (percentage >= 80)
    {
        grade = 'B';
    }
    else if (percentage >= 70)
    {
        grade = 'C';
    }
    else if (percentage >= 60)
    {
        grade = 'D';
    }
    else if (percentage >= 40)
    {
        grade = 'E';
    }
    else
    {
        grade = 'F';
    }

    printf("\n--- Student Performance Report ---\n");
    printf("Marks Entered:\n");
    printf("  - Physics:          %6.2f\n", physics_marks);
    printf("  - Chemistry:        %6.2f\n", chemistry_marks);
    printf("  - Mathematics:      %6.2f\n", math_marks);
    printf("  - Biology:          %6.2f\n", biology_marks);
    printf("  - Computer Science: %6.2f\n", computer_marks);
    printf("\nSummary:\n");
    printf("  - Total Marks:      %.2f / 500.00\n", total_marks);
    printf("  - Percentage:       %.2f%%\n", percentage);
    printf("  - Grade:            %c\n", grade);
    printf("----------------------------------\n\n");

    return 0;
}
