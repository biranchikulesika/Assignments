/**
 * @file a15q1_copy_file_command_line.c
 * @author Biranchi Kulesika
 * @date {empty}
 * @brief Copies a file using command-line arguments.
 *
 * This program copies the content of a source file to a destination file.
 * The source and destination filenames are provided as command-line arguments.
 * It includes robust error checking and operates in binary mode for
 * universal file compatibility.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	FILE *source_file_ptr;
	FILE *destination_file_ptr;
	int character;

	if (argc != 3)
	{
		fprintf(stderr, "Usage: %s <source_file> <destination_file>\n", argv[0]);
		return 1;
	}

	if (strcmp(argv[1], argv[2]) == 0)
	{
		fprintf(stderr, "Error: Source and destination files cannot be the same.\n");
		return 1;
	}

	source_file_ptr = fopen(argv[1], "rb");
	if (source_file_ptr == NULL)
	{
		perror("Error opening source file");
		return 1;
	}

	destination_file_ptr = fopen(argv[2], "wb");
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

	printf("File copied successfully from \"%s\" to \"%s\".\n", argv[1], argv[2]);

	fclose(source_file_ptr);
	fclose(destination_file_ptr);

	return 0;
}