/**
 * @file a15q2_rename_file_command_line.c
 * @author Biranchi Kulesika
 * @date {empty}
 * @brief Renames a file using command-line arguments.
 *
 * This program renames a file based on two command-line arguments:
 * the current filename and the new filename. It includes robust error
 * checking for argument count and self-renaming.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		fprintf(stderr, "Usage: %s <current_filename> <new_filename>\n", argv[0]);
		return 1;
	}

	if (strcmp(argv[1], argv[2]) == 0)
	{
		fprintf(stderr, "Error: New filename cannot be the same as the current filename.\n");
		return 1;
	}

	if (rename(argv[1], argv[2]) == 0)
	{
		printf("File successfully renamed from \"%s\" to \"%s\".\n", argv[1], argv[2]);
	}
	else
	{
		perror("Error renaming file");
		return 1;
	}

	return 0;
}