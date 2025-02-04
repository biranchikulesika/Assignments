/*
 * Assignment No.: 15
 * Question No.: 03
 * Date:
 *
 * Program: Display Files using Command Line Arguments
 * Description: This C program reads and displays the content of files given as command line arguments.
 * The file names are provided as command line arguments.
 *
 * Author: Biranchi Kulesika
 * Date: 4 Feb, 2025
 * Version: 1.0
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *file;
    char ch;

    if (argc < 2)
    {
        printf("Usage: %s <file1> <file2> ... <fileN>\n", argv[0]);
        return 1;
    }

    for (int i = 1; i < argc; i++)
    {
        file = fopen(argv[i], "r");
        if (file == NULL)
        {
            printf("Cannot open file %s\n", argv[i]);
            continue;
        }

        printf("Contents of %s:\n", argv[i]);
        while ((ch = fgetc(file)) != EOF)
        {
            putchar(ch);
        }
        printf("\n");

        fclose(file);
    }

    return 0;
}