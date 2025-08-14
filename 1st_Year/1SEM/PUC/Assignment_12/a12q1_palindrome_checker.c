/**
 * @file a12q1_palindrome_checker.c
 * @author Biranchi Kulesika
 * @date {empty}
 * @brief Checks if a given string is a palindrome.
 *
 * This program prompts the user for a string, safely reads the entire line
 * of input, and then determines if the string reads the same forwards and
 * backward. The check is performed by a dedicated function.
 */
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool is_palindrome(const char *text)
{
    int length = strlen(text);
    for (int i = 0; i < length / 2; i++)
    {
        if (text[i] != text[length - i - 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    char input_string[100];

    printf("Enter a string to check for palindrome: ");
    if (fgets(input_string, sizeof(input_string), stdin) == NULL)
    {
        printf("Error: Failed to read input.\n");
        return 1;
    }

    input_string[strcspn(input_string, "\n")] = '\0';

    printf("\nResult: \"%s\" is %s palindrome.\n\n", input_string, is_palindrome(input_string)?"a":"not a");

    return 0;
}