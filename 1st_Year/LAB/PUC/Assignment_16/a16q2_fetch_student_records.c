/*
 * Assignment No.: 16
 * Question No.: 02
 * Date:
 *
 * Program: Fetch and Display Student Records from a File
 * Description: This C program fetches all student records from a file and prints them on the monitor.
 *
 * Author: Biranchi Kulesika
 * Date: 4 Feb, 2025
 * Version: 1.0
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char roll_no[10];
    char name[50];
    float marks;
} Student;

int main()
{
    FILE *file;
    Student student;

    file = fopen("student_records.txt", "r");
    if (file == NULL)
    {
        printf("Cannot open file 'student_records.txt'\n");
        return 1;
    }

    printf("Student Records:\n");
    while (fscanf(file, "Roll No: %9s\nName: %49[^\n]\nMarks: %f\n\n", student.roll_no, student.name, &student.marks) == 3)
    {
        printf("Roll No: %s\n", student.roll_no);
        printf("Name: %s\n", student.name);
        printf("Marks: %.2f\n\n", student.marks);
    }

    fclose(file);
    return 0;
}