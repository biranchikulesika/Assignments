/**
 * @file a16q3_search_student_record.c
 * @author Biranchi Kulesika
 * @date {empty}
 * @brief Searches for and displays a specific student record from a file.
 *
 * This program prompts the user for a student's roll number, searches for
 * the corresponding record in "student_records.txt", and displays the
 * details if found. It includes robust error handling and safe file parsing.
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

int main()
{
	FILE *file_ptr;
	Student student;
	char search_roll_no[10];
	int found = 0;

	file_ptr = fopen(FILENAME, "r");
	if (file_ptr == NULL)
	{
		perror("Error opening file for reading");
		return 1;
	}

	printf("--- Student Record Search ---\n");
	printf("Enter the roll number to search: ");
	if (fgets(search_roll_no, sizeof(search_roll_no), stdin) == NULL)
	{
		fprintf(stderr, "Error reading Roll No.\n");
		fclose(file_ptr);
		return 1;
	}
	search_roll_no[strcspn(search_roll_no, "\n")] = '\0';

	while (fscanf(file_ptr, "Roll No: %9s\nName: %49[^\n]\nCourse: %49[^\n]\n\n", student.roll_no, student.name, student.course) == 3)
	{
		if (strcmp(student.roll_no, search_roll_no) == 0)
		{
			printf("\n--- Record Found ---\n");
			printf("Roll No: %s\n", student.roll_no);
			printf("Name:    %s\n", student.name);
			printf("Course:  %s\n", student.course);
			printf("--------------------\n");
			found = 1;
			break;
		}
	}

	if (!found)
	{
		printf("\nResult: No record found with Roll No: \"%s\".\n", search_roll_no);
	}

	fclose(file_ptr);

	return 0;
}