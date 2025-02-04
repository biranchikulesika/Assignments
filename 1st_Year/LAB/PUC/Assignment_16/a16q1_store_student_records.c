/*
 * Assignment No.: 16
 * Question No.: 01
 * Date:
 *
 * Program: Store Student Records in a File
 * Description: This C program stores some student records in a file.
 * The user is prompted to enter student details, which are then written to a file.
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
	int n, i;
	Student student;

	file = fopen("student_records.txt", "w");
	if (file == NULL)
	{
		printf("Cannot open file\n");
		return 1;
	}

	printf("Enter the number of students: ");
	scanf("%d", &n);
	getchar();

	for (i = 0; i < n; i++)
	{
		printf("\nEnter details for student %d", i + 1);
		printf("\nRoll No: ");
		fgets(student.roll_no, sizeof(student.roll_no), stdin);

		int len = strlen(student.roll_no);
		if (student.roll_no[len - 1] == '\n')
		{
			student.roll_no[len - 1] = '\0';
		}

		fflush(stdin);

		printf("Name: ");
		fgets(student.name, sizeof(student.name), stdin);

		len = strlen(student.name);
		if (student.name[len - 1] == '\n')
		{
			student.name[len - 1] = '\0';
		}

		fflush(stdin);

		printf("Course: ");
		fgets(student.course, sizeof(student.course), stdin);
		if (student.course[len - 1] == '\n')
		{
			student.course[len - 1] = '\0';
		}

		fprintf(file, "Roll No: %s\nName: %s\nCourse: %s\n\n", student.roll_no, student.name, student.course);
	}

	fclose(file);
	printf("Student records stored successfully in student_records.txt\n");

	return 0;
}