/**
 * @file a5q1_character_type_checker_switchcase.c
 * @author Biranchi Kulesika
 * @date 24 Sep 2023
 * @brief Checks and classifies a single character input by the user.
 *
 * This program prompts the user to enter a single character and then
 * analyzes it to determine if it is an alphabet, a digit, or a special
 * character. It uses an if-else block for classification and a switch-case
 * statement to display the result.
 */

#include <stdio.h>

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
    printf("Input : '%c'\n", input_char);
    printf("Type  :  ");

    switch (1)
    {
    case 1:
        if ((input_char >= 'A' && input_char <= 'Z') || (input_char >= 'a' && input_char <= 'z'))
        {
            printf("Alphabet\n");
        }
        else if (input_char >= '0' && input_char <= '9')
        {
            printf("Digit\n");
        }
        else
        {
            printf("Special Character.\n");
        }
        break;
    }

    printf("--------------------------\n\n");

    return 0;
}
