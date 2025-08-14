/**
 * @file a2q2_vowel_consonant_check.c
 * @author Biranchi Kulesika
 * @date 12 Sep, 2023
 * @brief Checks if a character is a vowel or a consonant.
 *
 * This program prompts the user to enter a single character and determines
 * whether it is a vowel or a consonant. It handles both uppercase and
 * lowercase letters and validates that the input is an alphabet.
 */

#include <ctype.h>
#include <stdio.h>

int main()
{
  char input_char;
  char lower_char;

  printf("Enter a character: ");
  scanf(" %c", &input_char);

  printf("\n--- Vowel/Consonant Check ---\n");

  if (isalpha(input_char))
  {
    lower_char = tolower(input_char);
    if (lower_char == 'a' || lower_char == 'e' || lower_char == 'i' ||
        lower_char == 'o' || lower_char == 'u')
    {
      printf("Result: '%c' is a vowel.\n", input_char);
    }
    else
    {
      printf("Result: '%c' is a consonant.\n", input_char);
    }
  }
  else
  {
    printf("Error: '%c' is not an alphabet.\n", input_char);
  }

  printf("-----------------------------\n\n");

  return 0;
}
