/**
 * @file a12q3_count_words.c
 * @author Biranchi Kulesika
 * @date {empty}
 * @brief Counts the number of words in a given string.
 *
 * This program prompts the user for a string, safely reads the input,
 * and then counts the number of words it contains. A word is defined as
 * a sequence of non-whitespace characters separated by whitespace.
 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

int count_words(const char *text)
{
    int word_count = 0;
    bool in_word = false;

    for (int i = 0; text[i] != '\0'; i++)
    {
        if (isspace(text[i]))
        {
            in_word = false;
        }
        else if (!in_word)
        {
            in_word = true;
            word_count++;
        }
    }

    return word_count;
}

int main()
{
    char input_string[100];

    printf("Enter a string to count the words: ");
    if (fgets(input_string, sizeof(input_string), stdin) == NULL)
    {
        printf("Error: Failed to read input.\n");
        return 1;
    }

    input_string[strcspn(input_string, "\n")] = '\0';

    int word_count_result = count_words(input_string);

    printf("\nThe entered string is:\n%s\n\nNumber of words: %d\n\n", input_string, word_count_result);

    return 0;
}