/*
 * Assignment No.: 14
 * Question No.: 03
 * Date:
 *
 * Program: Rename File
 * Description: This C program renames an existing text file. The current file name and the new file name are provided as input by the user.
 *
 * Author: Biranchi Kulesika
 * Date: 3 Feb, 2025
 * Version: 1.0
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char current_file_name[100], new_file_name[100];

	printf("Rename File\n\n");

	printf("Current file name: ");
	scanf("%s", current_file_name);

	printf("New file name: ");
	scanf("%s", new_file_name);

	if (rename(current_file_name, new_file_name) == 0)
	{
		printf("\nFile renamed successfully.\n");
	}
	else
	{
		printf("\nError renaming file.\n");
	}

	return 0;
}