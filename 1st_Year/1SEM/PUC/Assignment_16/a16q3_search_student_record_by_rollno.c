/*
* Description: This C program searches for a student record in a file and displays the record.
* Author: Biranchi Kulesika
* Date: 4 Feb, 2025
* Assignment No.: 16
* Question No.: 03
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
    FILE *file;
    Student student;
    char search_roll_no[10];
    int found = 0;
    char line[256];

    file = fopen("student_records.txt", "r");
    if (file == NULL) {
        printf("Error: Cannot open file student_records.txt\n");
        return 1;
    }

    printf("Enter the roll number to search: ");
    fgets(search_roll_no, sizeof(search_roll_no), stdin);
    search_roll_no[strcspn(search_roll_no, "\n")] = '\0';

    while (fgets(line, sizeof(line), file) != NULL) {
        char current_roll_no[10];
        if (sscanf(line, "Roll No: %s", current_roll_no) == 1) {
            if (strcmp(current_roll_no, search_roll_no) == 0) {
                // Read Name and Course for the found record
                if (fgets(line, sizeof(line), file) != NULL && sscanf(line, "Name: %49[^\n]", student.name) == 1) {
                    if (fgets(line, sizeof(line), file) != NULL && sscanf(line, "Course: %49[^\n]", student.course) == 1) {
                        printf("\nRecord Found:\n");
                        printf("Roll No: %s\n", current_roll_no);
                        printf("Name: %s\n", student.name);
                        printf("Course: %s\n", student.course);
                        found = 1;
                        break;
                    }
                }
            }
            // Consume the remaining lines of the current record if not found or partially read
            fgets(line, sizeof(line), file); // Name line
            fgets(line, sizeof(line), file); // Course line
            fgets(line, sizeof(line), file); // Empty line
        }
    }

    if (!found) {
        printf("No record found with Roll No: %s\n", search_roll_no);
    }

    fclose(file);

    return 0;
}
