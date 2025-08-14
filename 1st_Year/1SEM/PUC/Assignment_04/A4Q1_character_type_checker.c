/**
 * @file a4q1_character_type_checker.c
 * @author Biranchi Kulesika
 * @date 23 Sep 2023
 * @brief Checks and classifies a single character input by the user.
 *
 * This program prompts the user to enter a single character and then
 * analyzes it to determine if it is an alphabet, a digit, or a
 * special character. If it is an alphabet, it further identifies
 * whether it is uppercase or lowercase, and a vowel or a consonant.
 */

#include <stdio.h>
#include <ctype.h>

int main()
{
    char input_char;

    printf("Enter a single character: ");
    if (scanf(" %c", &input_char) != 1)
    {
        printf("Error: Failed to read character.\n");
        return 1;
    }

    printf("\n--- Character Analysis ---\n");
    printf("Input: '%c'\n", input_char);
    printf("Type:  ");

    if (isalpha(input_char))
    {
        char lower_char = tolower(input_char);
        int is_vowel_flag = (lower_char == 'a' || lower_char == 'e' || lower_char == 'i' || lower_char == 'o' || lower_char == 'u');

        if (isupper(input_char))
        {
            printf("Uppercase Alphabet (%s)\n", is_vowel_flag ? "Vowel" : "Consonant");
        }
        else
        {
            printf("Lowercase Alphabet (%s)\n", is_vowel_flag ? "Vowel" : "Consonant");
        }
    }
    else if (isdigit(input_char))
    {
        printf("Digit\n");
    }
    else
    {
        printf("Special Character\n");
    }

    printf("--------------------------\n\n");

    return 0;
}
