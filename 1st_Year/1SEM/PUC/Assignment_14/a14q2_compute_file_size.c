/**
 * @file a14q2_compute_file_size.c
 * @author Biranchi Kulesika
 * @date {empty}
 * @brief Computes and displays the size of a given file.
 *
 * This program prompts the user for a filename, safely reads the input,
 * and then determines the file's size in bytes. It displays the size in
 * a human-readable format (Bytes, KB, MB).
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_FILENAME_LENGTH 256

int main()
{
	char input_filename[MAX_FILENAME_LENGTH];
	FILE *file_ptr;
	long file_size_bytes;

	printf("File Size Calculator:\n");
	printf("Enter the file name: ");
	if (fgets(input_filename, sizeof(input_filename), stdin) == NULL)
	{
		fprintf(stderr, "Error: Failed to read filename.\n");
		return 1;
	}
	input_filename[strcspn(input_filename, "\n")] = '\0';

	file_ptr = fopen(input_filename, "rb");
	if (file_ptr == NULL)
	{
		perror("Error opening file");
		return 1;
	}

	fseek(file_ptr, 0, SEEK_END);
	file_size_bytes = ftell(file_ptr);
	fclose(file_ptr);

	if (file_size_bytes == -1L)
	{
		perror("Error determining file size");
		return 1;
	}

	printf("\nFile Size Report for \"%s\":\n", input_filename);
	printf("Bytes	 :  %ld B\n", file_size_bytes);
	printf("Kilobytes:  %.3f KB\n", (double)file_size_bytes / 1024.0);
	printf("Megabytes:  %.3f MB\n", (double)file_size_bytes / (1024.0 * 1024.0));
	printf("\n");

	return 0;
}