/*
* Description: This C program computes the size of a given file in kilobytes.
* The file name is provided as input by the user.
* Author: Biranchi Kulesika
* Date: 3 Feb, 2025
* Assignment No.: 14
* Question No.: 02
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char file_name[100];
    FILE *file;
    long file_size;

    printf("Enter the file name: ");
    fgets(file_name, sizeof(file_name), stdin);
    file_name[strcspn(file_name, "\n")] = 0; // Remove trailing newline

    file = fopen(file_name, "r");
    if (file == NULL) {
        printf("Error: Cannot open file %s\n", file_name);
        return 1;
    }

    fseek(file, 0, SEEK_END);
    file_size = ftell(file);

    fclose(file);

    printf("File size: %.2f KB\n", file_size / 1024.0);

    return 0;
}
