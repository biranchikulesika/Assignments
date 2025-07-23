/*
 * Assignment No.: 16
 * Question No.: 02
 * Date:
 *
 * Program: Fetch Student Records from a File
 * Description: This C program fetches student records from a file and prints them on the monitor.
 *
 * Author: Biranchi Kulesika
 * Date: 4 Feb, 2025
 * Version: 1.0
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char roll_no[10];
    char name[50];
    char course[50];
} Student;

int main()
{
    FILE *file;
    Student student;

    file = fopen("student_records.txt", "r");
    if (file == NULL)
    {
        printf("Cannot open file\n");
        return 1;
    }

    printf("Student Records:\n\n");

    while (fscanf(file, "Roll No: %s\nName: %[^\n]\nCourse: %[^\n]\n\n", student.roll_no, student.name, student.course) != EOF)
    {
        printf("Roll No: %s\n", student.roll_no);
        printf("Name: %s\n", student.name);
        printf("Course: %s\n\n", student.course);
    }

    fclose(file);

    return 0;
}