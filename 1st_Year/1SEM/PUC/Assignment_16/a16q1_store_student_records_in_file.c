/*
* Description: This C program stores student records in a file.
* The user is prompted to enter student details, which are then written to a file.
* Author: Biranchi Kulesika
* Date: 4 Feb, 2025
* Assignment No.: 16
* Question No.: 01
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char roll_no[10];
    char name[50];
    char course[50];
} Student;

// Function to clear input buffer
void clear_input_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    FILE *file;
    int n, i;
    Student student;

    file = fopen("student_records.txt", "w");
    if (file == NULL) {
        printf("Error: Cannot open file student_records.txt\n");
        return 1;
    }

    printf("Enter the number of students: ");
    scanf("%d", &n);
    clear_input_buffer(); // Clear the newline character after reading integer

    for (i = 0; i < n; i++) {
        printf("\nEnter details for student %d\n", i + 1);
        printf("Roll No: ");
        fgets(student.roll_no, sizeof(student.roll_no), stdin);
        student.roll_no[strcspn(student.roll_no, "\n")] = '\0';

        printf("Name: ");
        fgets(student.name, sizeof(student.name), stdin);
        student.name[strcspn(student.name, "\n")] = '\0';

        printf("Course: ");
        fgets(student.course, sizeof(student.course), stdin);
        student.course[strcspn(student.course, "\n")] = '\0';

        fprintf(file, "Roll No: %s\nName: %s\nCourse: %s\n\n", student.roll_no, student.name, student.course);
    }

    fclose(file);
    printf("Student records stored successfully in student_records.txt\n");

    return 0;
}
