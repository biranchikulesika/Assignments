/*
 * Assignment No.: 15
 * Question No.: 02
 * Date:
 *
 * Program: Rename File using Command Line Arguments
 * Description: This C program renames an existing file using command line arguments.
 * The current file name and the new file name are provided as command line arguments.
 *
 * Author: Biranchi Kulesika
 * Date: 4 Feb, 2025
 * Version: 1.0
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Usage: %s <current_file_name> <new_file_name>\n", argv[0]);
        return 1;
    }

    if (rename(argv[1], argv[2]) != 0)
    {
        perror("Error renaming file");
        return 1;
    }

    printf("File renamed successfully from %s to %s\n", argv[1], argv[2]);
    return 0;
}