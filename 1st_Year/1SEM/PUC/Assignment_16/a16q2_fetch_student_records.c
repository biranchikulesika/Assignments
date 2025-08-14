/**
 * @file a16q2_fetch_student_records.c
 * @author Biranchi Kulesika
 * @date {empty}
 * @brief Fetches and displays student records from a text file.
 *
 * This program reads student records from a file named "student_records.txt"
 * and displays them on the console in a structured format. It handles cases
 * where the file cannot be opened or is empty.
 */
#include <stdio.h>
#include <stdlib.h>

#define FILENAME "student_records.txt"

typedef struct
{
    char roll_no[10];
    char name[50];
    char course[50];
} Student;

int main()
{
    FILE *file_ptr;
    Student student;
    int records_found = 0;

    file_ptr = fopen(FILENAME, "r");
    if (file_ptr == NULL)
    {
        perror("Error opening file for reading");
        return 1;
    }

    printf("Student Records from \"%s\":\n\n", FILENAME);

    while (fscanf(file_ptr, "Roll No: %9s\nName: %49[^\n]\nCourse: %49[^\n]\n\n", student.roll_no, student.name, student.course) == 3)
    {
        printf("Roll No: %s\n", student.roll_no);
        printf("Name:    %s\n", student.name);
        printf("Course:  %s\n\n", student.course);
        records_found++;
    }

    if (records_found == 0)
    {
        printf("No student records found in the file.\n\n");
    }

    fclose(file_ptr);

    return 0;
}