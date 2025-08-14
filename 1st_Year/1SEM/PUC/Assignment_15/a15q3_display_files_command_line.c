/**
 * @file a15q3_display_files_command_line.c
 * @author Biranchi Kulesika
 * @date {empty}
 * @brief Displays the content of one or more files using command-line arguments.
 *
 * This program, similar to the 'cat' utility, reads and displays the
 * content of each file specified in the command-line arguments. It includes
 * robust error handling for files that cannot be opened.
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *file_ptr;
    int character;

    if (argc < 2)
    {
        fprintf(stderr, "Usage: %s <file1> [file2] ...\n", argv[0]);
        return 1;
    }

    for (int i = 1; i < argc; i++)
    {
        file_ptr = fopen(argv[i], "rb");
        if (file_ptr == NULL)
        {
            fprintf(stderr, "Error opening file \"%s\": ", argv[i]);
            perror(NULL);
            continue;
        }

        printf("--- Contents of %s ---\n", argv[i]);
        while ((character = fgetc(file_ptr)) != EOF)
        {
            putchar(character);
        }
        printf("\n--- End of %s ---\n\n", argv[i]);

        fclose(file_ptr);
    }

    return 0;
}