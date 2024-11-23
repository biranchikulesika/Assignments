/*
 *A C program to calculate the per centage and find the grade
 *based on the marks entered for various subjects
 *such as phy, chem, math, bio, and computer
 *
 *Author: Biranchi Kulesika
 *Date: 23 Sep, 2023
 *Assignment No.: 04
 *Question No.: 03
 */

#include <stdio.h>

int main()
{
    float phy, chem, math, bio, comp, total_marks, percentage;
    char grade;

    printf("\n\nEnter marks for the following subjects:\n");

    while (1)
    {
        printf("Physics: ");
        fflush(stdin);
        scanf("%f", &phy);
        if (phy <= 100 && phy >= 0)
        {
            break;
        }
        printf("\nMarks cannot be negative or exceed 100 for each subject. Please "
               "enter the marks again.\n\n");
    }

    while (1)
    {
        printf("Chemistry: ");
        fflush(stdin);
        scanf("%f", &chem);
        if (chem <= 100 && chem >= 0)
        {
            break;
        }
        printf("\nMarks cannot be negative or exceed 100 for each subject. Please "
               "enter the marks again.\n\n");
    }

    while (1)
    {
        printf("Math: ");
        fflush(stdin);
        scanf("%f", &math);
        if (math <= 100 && math >= 0)
        {
            break;
        }
        printf("\nMarks cannot be negative or exceed 100 for each subject. Please "
               "enter the marks again.\n\n");
    }

    while (1)
    {
        printf("Biology: ");
        fflush(stdin);
        scanf("%f", &bio);
        if (bio <= 100 && bio >= 0)
        {
            break;
        }
        printf("\nMarks cannot be negative or exceed 100 for each subject. Please "
               "enter the marks again.\n\n");
    }

    while (1)
    {
        printf("Computer Science: ");
        fflush(stdin);
        scanf("%f", &comp);
        if (comp <= 100 && comp >= 0)
        {
            break;
        }
        printf("\nMarks cannot be negative or exceed 100 for each subject. Please "
               "enter the marks again.\n\n");
    }

    printf(
        "\nMarks you entered are:\nPhysics: %.2f\nChemistry: %.2f\nMathematics: "
        "%.2f\nBiology: %.2f\nComputer Science: %.2f\n",
        phy, chem, math, bio, comp);
    total_marks = phy + chem + math + bio + comp;

    percentage = total_marks / 5;

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

    printf("\nTotal Marks = %.2f + %.2f + %.2f + %.2f + %.2f = %.2f\n", phy, chem,
           math, bio, comp, total_marks);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade: %c\n\n", grade);

    return 0;
}
