/*
 * Assignment No.: 15
 * Question No.: 01
 * Date:
 *
 * Program: Copy File using Command Line Arguments
 * Description: This C program copies the content of a source file to a destination file using command line arguments. The source and destination file names are provided as command line arguments.
 *
 * Author: Biranchi Kulesika
 * Date: 3 Feb, 2025
 * Version: 1.0
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	FILE *source, *destination;
	char ch;

	if (argc != 3)
	{
		printf("Usage: %s <source_file> <destination_file>\n", argv[0]);
		return 1;
	}

	source = fopen(argv[1], "r");
	if (source == NULL)
	{
		printf("Cannot open source file %s\n", argv[1]);
		return 1;
	}

	destination = fopen(argv[2], "w");
	if (destination == NULL)
	{
		printf("Cannot open destination file %s\n", argv[2]);
		fclose(source);
		return 1;
	}

	while ((ch = fgetc(source)) != EOF)
	{
		fputc(ch, destination);
	}

	printf("File copied successfully.\n");

	fclose(source);
	fclose(destination);

	return 0;
}