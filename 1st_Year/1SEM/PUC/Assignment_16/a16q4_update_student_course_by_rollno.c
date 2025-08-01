/*
* Description: This C program updates a student's course based on the roll number.
* The user is prompted to enter a roll number and the new course, and the program updates the corresponding record in the file.
* Author: Biranchi Kulesika
* Date: 4 Feb, 2025
* Assignment No.: 16
* Question No.: 04
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char roll_no[10];
    char name[50];
    char course[50];
} Student;

int main() {
    FILE *file, *tempFile;
    Student student;
    char search_roll_no[10];
    char new_course[50];
    int found = 0;
    char line[256];

    file = fopen("student_records.txt", "r");
    if (file == NULL) {
        printf("Error: Cannot open file 'student_records.txt'\n");
        return 1;
    }

    tempFile = fopen("temp.txt", "w");
    if (tempFile == NULL) {
        printf("Error: Cannot open temporary file\n");
        fclose(file);
        return 1;
    }

    printf("Enter the roll number to update the course: ");
    fgets(search_roll_no, sizeof(search_roll_no), stdin);
    search_roll_no[strcspn(search_roll_no, "\n")] = '\0';

    while (fgets(line, sizeof(line), file) != NULL) {
        char current_roll_no[10];
        if (sscanf(line, "Roll No: %s", current_roll_no) == 1) {
            // Read Name and Course for the current record
            char current_name[50];
            char current_course[50];

            fgets(line, sizeof(line), file);
            sscanf(line, "Name: %49[^\n]", current_name);

            fgets(line, sizeof(line), file);
            sscanf(line, "Course: %49[^\n]", current_course);

            fgets(line, sizeof(line), file); // Consume the empty line

            if (strcmp(current_roll_no, search_roll_no) == 0) {
                printf("Found record:\nRoll No: %s\nName: %s\nCourse: %s\n", current_roll_no, current_name, current_course);
                printf("Enter the new course: ");
                fgets(new_course, sizeof(new_course), stdin);
                new_course[strcspn(new_course, "\n")] = '\0';
                strcpy(student.course, new_course);
                found = 1;
            } else {
                strcpy(student.course, current_course);
            }
            strcpy(student.roll_no, current_roll_no);
            strcpy(student.name, current_name);

            fprintf(tempFile, "Roll No: %s\nName: %s\nCourse: %s\n\n", student.roll_no, student.name, student.course);
        }
    }

    fclose(file);
    fclose(tempFile);

    if (found) {
        remove("student_records.txt");
        rename("temp.txt", "student_records.txt");
        printf("Record updated successfully.\n");
    } else {
        remove("temp.txt"); // Remove temp file if no record was found
        printf("No record found for roll number %s\n", search_roll_no);
    }

    return 0;
}
