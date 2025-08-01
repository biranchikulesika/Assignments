/*
* Description: This C program copies the content of a source file and writes it to a destination file.
* The source and destination file names are provided as input by the user.
* Author: Biranchi Kulesika
* Date: 3 Feb, 2025
* Assignment No.: 14
* Question No.: 01
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char source_file[100], destination_file[100];
    FILE *source, *destination;
    char ch;

    printf("Enter the source file name: ");
    fgets(source_file, sizeof(source_file), stdin);
    source_file[strcspn(source_file, "\n")] = 0; // Remove trailing newline

    printf("Enter the destination file name: ");
    fgets(destination_file, sizeof(destination_file), stdin);
    destination_file[strcspn(destination_file, "\n")] = 0; // Remove trailing newline

    source = fopen(source_file, "r");
    if (source == NULL) {
        printf("Error: Cannot open source file %s\n", source_file);
        return 1;
    }

    destination = fopen(destination_file, "w");
    if (destination == NULL) {
        printf("Error: Cannot open destination file %s\n", destination_file);
        fclose(source);
        return 1;
    }

    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }

    printf("File copied successfully from %s to %s.\n", source_file, destination_file);

    fclose(source);
    fclose(destination);

    return 0;
}