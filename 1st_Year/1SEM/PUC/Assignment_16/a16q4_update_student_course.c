/**
 * @file a16q4_update_student_course.c
 * @author Biranchi Kulesika
 * @date {empty}
 * @brief Updates a student's course in a text file based on roll number.
 *
 * This program prompts for a student's roll number and a new course. It reads
 * records from a source file, writes all records to a temporary file
 * (with the specified record updated), and then safely replaces the original
 * file with the temporary one.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SOURCE_FILENAME "student_records.txt"
#define TEMP_FILENAME "temp.txt"

typedef struct
{
	char roll_no[10];
	char name[50];
	char course[50];
} Student;

int main()
{
	FILE *source_file_ptr, *temp_file_ptr;
	Student student;
	char search_roll_no[10];
	char new_course[50];
	int record_found = 0;

	source_file_ptr = fopen(SOURCE_FILENAME, "r");
	if (source_file_ptr == NULL)
	{
		perror("Error opening source file");
		return 1;
	}

	temp_file_ptr = fopen(TEMP_FILENAME, "w");
	if (temp_file_ptr == NULL)
	{
		perror("Error opening temporary file");
		fclose(source_file_ptr);
		return 1;
	}

	printf("--- Student Course Update Utility ---\n");
	printf("Enter the roll number to update: ");
	if (fgets(search_roll_no, sizeof(search_roll_no), stdin) == NULL)
	{
		fprintf(stderr, "Error reading Roll No.\n");
		fclose(source_file_ptr);
		fclose(temp_file_ptr);
		remove(TEMP_FILENAME);
		return 1;
	}
	search_roll_no[strcspn(search_roll_no, "\n")] = '\0';

	while (fscanf(source_file_ptr, "Roll No: %9s\nName: %49[^\n]\nCourse: %49[^\n]\n\n", student.roll_no, student.name, student.course) == 3)
	{
		if (strcmp(student.roll_no, search_roll_no) == 0)
		{
			printf("\n--- Current Record ---\n");
			printf("Roll No: %s\n", student.roll_no);
			printf("Name:    %s\n", student.name);
			printf("Course:  %s\n", student.course);
			printf("----------------------\n");

			printf("\nEnter the new course: ");
			if (fgets(new_course, sizeof(new_course), stdin) == NULL)
			{
				fprintf(stderr, "Error reading new course. Aborting update.\n");
				fprintf(temp_file_ptr, "Roll No: %s\nName: %s\nCourse: %s\n\n", student.roll_no, student.name, student.course);
				record_found = -1;
				break;
			}
			new_course[strcspn(new_course, "\n")] = '\0';
			strcpy(student.course, new_course);
			record_found = 1;
		}
		fprintf(temp_file_ptr, "Roll No: %s\nName: %s\nCourse: %s\n\n", student.roll_no, student.name, student.course);
	}

	fclose(source_file_ptr);
	fclose(temp_file_ptr);

	if (record_found == 1)
	{
		if (remove(SOURCE_FILENAME) != 0)
		{
			perror("Error deleting original file");
			fprintf(stderr, "Update failed. The updated data is in \"%s\".\n", TEMP_FILENAME);
			return 1;
		}
		if (rename(TEMP_FILENAME, SOURCE_FILENAME) != 0)
		{
			perror("Error renaming temporary file");
			fprintf(stderr, "Update failed. The original file was deleted, but the new file could not be renamed. The data is in \"%s\".\n", TEMP_FILENAME);
			return 1;
		}
		printf("\nRecord updated successfully.\n");
	}
	else if (record_found == 0)
	{
		remove(TEMP_FILENAME);
		printf("\nResult: No record found with Roll No: \"%s\".\n", search_roll_no);
	}
	else
	{
		remove(TEMP_FILENAME);
		printf("\nUpdate aborted due to input error.\n");
	}

	return 0;
}