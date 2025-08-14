/**
 * @file a14q3_rename_file.c
 * @author Biranchi Kulesika
 * @date {empty}
 * @brief Renames a file.
 *
 * This program prompts the user for the current and new filenames.
 * It performs robust error checking, including handling filenames with
 * spaces, and then renames the file using the standard library's
 * rename function.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_FILENAME_LENGTH 256

int main()
{
	char old_filename[MAX_FILENAME_LENGTH];
	char new_filename[MAX_FILENAME_LENGTH];

	printf("File Rename Utility:\n");

	printf("Enter the current file name: ");
	if (fgets(old_filename, sizeof(old_filename), stdin) == NULL)
	{
		fprintf(stderr, "Error: Failed to read current filename.\n");
		return 1;
	}
	old_filename[strcspn(old_filename, "\n")] = '\0';

	printf("Enter the new file name: ");
	if (fgets(new_filename, sizeof(new_filename), stdin) == NULL)
	{
		fprintf(stderr, "Error: Failed to read new filename.\n");
		return 1;
	}
	new_filename[strcspn(new_filename, "\n")] = '\0';

	if (strcmp(old_filename, new_filename) == 0)
	{
		fprintf(stderr, "\nError: New filename cannot be the same as the current filename.\n");
		return 1;
	}

	if (rename(old_filename, new_filename) == 0)
	{
		printf("\nFile successfully renamed from \"%s\" to \"%s\".\n", old_filename, new_filename);
	}
	else
	{
		perror("\nError renaming file");
	}

	return 0;
}