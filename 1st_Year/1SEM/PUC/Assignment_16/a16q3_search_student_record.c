/*
 * Assignment No.: 16
 * Question No.: 03
 * Date:
 *
 * Program: Search a Student Record from a File
 * Description: This C program searches for a student record in a file and displays the record.
 *
 * Author: Biranchi Kulesika
 * Date: 4 Feb, 2025
 * Version: 1.0
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
	char search_roll_no[10];
	int found = 0;

	file = fopen("student_records.txt", "r");
	if (file == NULL)
	{
		printf("Cannot open file\n");
		return 1;
	}

	printf("Enter the roll number to search: ");
	fgets(search_roll_no, sizeof(search_roll_no), stdin);

	int len = strlen(search_roll_no);
	if (search_roll_no[len - 1] == '\n')
	{
		search_roll_no[len - 1] = '\0';
	}

	while (fscanf(file, "Roll No: %s\nName: %[^\n]\nCourse: %[^\n]\n\n", student.roll_no, student.name, student.course) != EOF)
	{
		if (strcmp(student.roll_no, search_roll_no) == 0)
		{
			printf("\nRecord Found:\n");
			printf("Roll No: %s\n", student.roll_no);
			printf("Name: %s\n", student.name);
			printf("Course: %s\n", student.course);
			found = 1;
			break;
		}
	}

	if (!found)
	{
		printf("No record found with Roll No: %s\n", search_roll_no);
	}

	fclose(file);

	return 0;
}