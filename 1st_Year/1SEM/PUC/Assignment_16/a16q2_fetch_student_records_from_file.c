/*
* Description: This C program fetches student records from a file and prints them on the monitor.
* Author: Biranchi Kulesika
* Date: 4 Feb, 2025
* Assignment No.: 16
* Question No.: 02
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
    char line[256]; // Buffer to read lines

    file = fopen("student_records.txt", "r");
    if (file == NULL) {
        printf("Error: Cannot open file student_records.txt\n");
        return 1;
    }

    printf("Student Records:\n\n");

    while (fgets(line, sizeof(line), file) != NULL) {
        if (sscanf(line, "Roll No: %s", student.roll_no) == 1) {
            if (fgets(line, sizeof(line), file) != NULL && sscanf(line, "Name: %49[^\n]", student.name) == 1) {
                if (fgets(line, sizeof(line), file) != NULL && sscanf(line, "Course: %49[^\n]", student.course) == 1) {
                    printf("Roll No: %s\n", student.roll_no);
                    printf("Name: %s\n", student.name);
                    printf("Course: %s\n\n", student.course);
                    fgets(line, sizeof(line), file); // Consume the empty line
                }
            }
        }
    }

    fclose(file);

    return 0;
}
