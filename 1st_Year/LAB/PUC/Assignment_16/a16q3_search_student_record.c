/*
 * Assignment No.: 16
 * Question No.: 03
 * Date:
 *
 * Program: Search for a Student Record based on Roll Number
 * Description: This C program searches for a student record based on the student's roll number. The user is prompted to enter a roll number, and the program searches for the corresponding record in the file.
 *
 * Author: Biranchi Kulesika
 * Date: 4 Feb, 2025
 * Version: 1.0
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char roll_no[10];
    char name[50];
    float marks;
} Student;

int main()
{
    FILE *file;
    Student student;
    char search_roll_no[10];
    int found = 0;

    file = fopen("student_records.txt", "r");
    if (file == NULL)
    {
        printf("Cannot open file 'student_records.txt'\n");
        return 1;
    }

    printf("Enter the roll number to search: ");
    fgets(search_roll_no, sizeof(search_roll_no), stdin);

int len = strlen(search_roll_no);
		if (search_roll_no[len - 1] == '\n')
		{
			search_roll_no[len - 1] = '\0';
		}

    while (fscanf(file, "Roll No: %9s\nName: %49[^\n]\nMarks: %f\n\n", student.roll_no, student.name, &student.marks) == 3)
    {
        if (strcmp(student.roll_no, search_roll_no) == 0)
        {
            printf("Record found:\n");
            printf("Roll No: %s\n", student.roll_no);
            printf("Name: %s\n", student.name);
            printf("Marks: %.2f\n", student.marks);
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("No record found for roll number %s\n", search_roll_no);
    }

    fclose(file);
    return 0;
}