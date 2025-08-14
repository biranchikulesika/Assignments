/**
 * @file a5q2_vowel_consonant_check_switchcase.c
 * @author Biranchi Kulesika
 * @date 24 Sep 2023
 * @brief Checks if an alphabet is a vowel or a consonant using a switch-case.
 *
 * This program prompts the user to enter a single alphabet character.
 * It then validates the input to ensure it is an alphabet and uses a
 * switch-case statement to determine and display whether the character
 * is a vowel or a consonant. The check is case-insensitive.
 */

#include <ctype.h>
#include <stdio.h>

int main()
{
  char input_char;

  printf("Enter an alphabet: ");

  if (scanf(" %c", &input_char) != 1)
  {
    printf("Error: Invalid input. Please enter a single character.\n");
    return 1;
  }

  if (isalpha(input_char) == 0)
  {
    printf("Error: '%c' is not an alphabet. Please enter an alphabet character.\n", input_char);
    return 1;
  }

  char lower_char = tolower(input_char);

  printf("\n--- Vowel/Consonant Analysis ---\n");
  printf("Input : '%c'\n", input_char);
  printf("Type  : ");

  switch (lower_char)
  {
  case 'a':
  case 'e':
  case 'i':
  case 'o':
  case 'u':
    printf("Vowel\n");
    break;
  default:
    printf("Consonant\n");
    break;
  }

  printf("--------------------------------\n\n");

  return 0;
}