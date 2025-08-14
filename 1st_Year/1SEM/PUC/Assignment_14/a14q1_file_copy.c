/**
 * @file a14q1_file_copy.c
 * @author Biranchi Kulesika
 * @date {empty}
 * @brief Copies the content of one file to another.
 *
 * This program prompts the user for a source and a destination filename.
 * It performs robust error checking, ensuring files can be opened and that
 * the source and destination are not the same file. It then copies the
 * content character by character in binary mode for universal compatibility.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_FILENAME_LENGTH 256

int main()
{
	char source_filename[MAX_FILENAME_LENGTH];
	char destination_filename[MAX_FILENAME_LENGTH];
	FILE *source_file_ptr;
	FILE *destination_file_ptr;
	int character;

	printf("File Copy Utility:\n");

	printf("Enter the source file name: ");
	if (fgets(source_filename, sizeof(source_filename), stdin) == NULL)
	{
		fprintf(stderr, "Error: Failed to read source filename.\n");
		return 1;
	}
	source_filename[strcspn(source_filename, "\n")] = '\0';

	printf("Enter the destination file name: ");
	if (fgets(destination_filename, sizeof(destination_filename), stdin) == NULL)
	{
		fprintf(stderr, "Error: Failed to read destination filename.\n");
		return 1;
	}
	destination_filename[strcspn(destination_filename, "\n")] = '\0';

	if (strcmp(source_filename, destination_filename) == 0)
	{
		fprintf(stderr, "\nError: Source and destination filenames cannot be the same.\n");
		return 1;
	}

	source_file_ptr = fopen(source_filename, "rb");
	if (source_file_ptr == NULL)
	{
		perror("Error opening source file");
		return 1;
	}

	destination_file_ptr = fopen(destination_filename, "wb");
	if (destination_file_ptr == NULL)
	{
		perror("Error opening destination file");
		fclose(source_file_ptr);
		return 1;
	}

	while ((character = fgetc(source_file_ptr)) != EOF)
	{
		fputc(character, destination_file_ptr);
	}

	printf("\nFile copied successfully from \"%s\" to \"%s\".\n", source_filename, destination_filename);

	fclose(source_file_ptr);
	fclose(destination_file_ptr);

	return 0;
}