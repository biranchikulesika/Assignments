/**
 * @file a12q4_count_vowels.c
 * @author Biranchi Kulesika
 * @date {empty}
 * @brief Counts the number of vowels in a given string.
 *
 * This program prompts the user for a string, safely reads the input,
 * and then counts the total number of vowels (a, e, i, o, u), ignoring
 * case. The counting logic is encapsulated in a dedicated function.
 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int count_vowels(const char *text)
{
    int vowel_count = 0;
    for (int i = 0; text[i] != '\0'; i++)
    {
        char current_char = tolower(text[i]);
        switch (current_char)
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            vowel_count++;
            break;
        }
    }
    return vowel_count;
}

int main()
{
    char input_string[100];

    printf("Enter a string to count the vowels: ");
    if (fgets(input_string, sizeof(input_string), stdin) == NULL)
    {
        printf("Error: Failed to read input.\n");
        return 1;
    }

    input_string[strcspn(input_string, "\n")] = '\0';

    int vowel_count_result = count_vowels(input_string);

    printf("\nThe entered string is:\n\"%s\"\n\nNumber of vowel: %d\n", input_string, vowel_count_result);

    return 0;
}