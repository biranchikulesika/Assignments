/*
 * Assignment No.: 16
 * Question No.: 04
 * Date:
 *
 * Program: Update a Student Course based on Roll Number
 * Description: This C program updates a student's course based on the roll number. The user is prompted to enter a roll number and the new course, and the program updates the corresponding record in the file.
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
	FILE *file, *tempFile;
	Student student;
	char search_roll_no[10];
	char new_course[50];
	int found = 0;

	file = fopen("student_records.txt", "r");
	if (file == NULL)
	{
		printf("Cannot open file 'student_records.txt'\n");
		return 1;
	}

	tempFile = fopen("temp.txt", "w");
	if (tempFile == NULL)
	{
		printf("Cannot open temporary file\n");
		fclose(file);
		return 1;
	}

	printf("Enter the roll number to update the course: ");
	fgets(search_roll_no, sizeof(search_roll_no), stdin);
	search_roll_no[strcspn(search_roll_no, "\n")] = '\0';

	while (fscanf(file, "Roll No: %9s\nName: %49[^\n]\nCourse: %49[^\n]\n\n", student.roll_no, student.name, student.course) == 3)
	{
		if (strcmp(student.roll_no, search_roll_no) == 0)
		{
			printf("Roll No: %s\nName: %s\nCourse: %s\n", student.roll_no, student.name, student.course);
			printf("Enter the new course: ");
			fgets(new_course, sizeof(new_course), stdin);
			new_course[strcspn(new_course, "\n")] = '\0';
			strcpy(student.course, new_course);
			found = 1;
		}
		fprintf(tempFile, "Roll No: %s\nName: %s\nCourse: %s\n\n", student.roll_no, student.name, student.course);
	}

	fclose(file);
	fclose(tempFile);

	if (found)
	{
		remove("student_records.txt");
		rename("temp.txt", "student_records.txt");
		printf("Record updated successfully.\n");
	}
	else
	{
		remove("temp.txt");
		printf("No record found for roll number %s\n", search_roll_no);
	}

	return 0;
}