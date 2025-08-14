/**
 * @file a16q1_store_student_records.c
 * @author Biranchi Kulesika
 * @date {empty}
 * @brief Stores student records in a text file.
 *
 * This program prompts the user for the number of students and their details
 * (Roll No, Name, Course). It then writes these records to a file named
 * "student_records.txt" in a structured text format, overwriting any
 * existing content.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILENAME "student_records.txt"

typedef struct
{
	char roll_no[10];
	char name[50];
	char course[50];
} Student;

void clean_stdin()
{
	int c;
	while ((c = getchar()) != '\n' && c != EOF)
	{
	}
}

int main()
{
	FILE *file_ptr;
	int num_students, i;
	Student student;

	file_ptr = fopen(FILENAME, "w");
	if (file_ptr == NULL)
	{
		perror("Error opening file for writing");
		return 1;
	}

	printf("--- Student Record Entry ---\n");
	printf("Enter the number of students to add: ");
	if (scanf("%d", &num_students) != 1 || num_students < 0)
	{
		fprintf(stderr, "Error: Invalid input. Please enter a non-negative integer.\n");
		fclose(file_ptr);
		return 1;
	}
	clean_stdin();

	for (i = 0; i < num_students; i++)
	{
		printf("\nEnter details for student %d:\n", i + 1);

		printf("  Roll No: ");
		if (fgets(student.roll_no, sizeof(student.roll_no), stdin) == NULL)
		{
			fprintf(stderr, "Error reading Roll No.\n");
			break;
		}
		student.roll_no[strcspn(student.roll_no, "\n")] = '\0';

		printf("  Name: ");
		if (fgets(student.name, sizeof(student.name), stdin) == NULL)
		{
			fprintf(stderr, "Error reading Name.\n");
			break;
		}
		student.name[strcspn(student.name, "\n")] = '\0';

		printf("  Course: ");
		if (fgets(student.course, sizeof(student.course), stdin) == NULL)
		{
			fprintf(stderr, "Error reading Course.\n");
			break;
		}
		student.course[strcspn(student.course, "\n")] = '\0';

		fprintf(file_ptr, "Roll No: %s\nName: %s\nCourse: %s\n\n", student.roll_no, student.name, student.course);
	}

	fclose(file_ptr);
	printf("\n%d student record(s) stored successfully in \"%s\".\n", i, FILENAME);

	return 0;
}