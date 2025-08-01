/*
* Description: This C program renames an existing text file.
* The current file name and the new file name are provided as input by the user.
* Author: Biranchi Kulesika
* Date: 3 Feb, 2025
* Assignment No.: 14
* Question No.: 03
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char current_file_name[100], new_file_name[100];

    printf("Rename File\n\n");

    printf("Current file name: ");
    fgets(current_file_name, sizeof(current_file_name), stdin);
    current_file_name[strcspn(current_file_name, "\n")] = 0; // Remove trailing newline

    printf("New file name: ");
    fgets(new_file_name, sizeof(new_file_name), stdin);
    new_file_name[strcspn(new_file_name, "\n")] = 0; // Remove trailing newline

    if (rename(current_file_name, new_file_name) == 0) {
        printf("\nFile '%s' renamed successfully to '%s'.\n", current_file_name, new_file_name);
    } else {
        printf("\nError renaming file '%s'.\n", current_file_name);
    }

    return 0;
}
