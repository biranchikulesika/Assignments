/**
 * @file a5q3_menu_driven_operations.c
 * @author Biranchi Kulesika
 * @date 24 Sep 2023
 * @brief A menu-driven program to perform various operations.
 *
 * This program displays a menu of options to the user:
 * 1. Add two integers.
 * 2. Check if a character is an alphabet.
 * 3. Check if a character is a digit.
 * 4. Exit.
 * The program repeatedly prompts the user for a choice and executes the
 * corresponding action until the user chooses to exit. It includes robust
 * input validation for all user inputs.
 */

#include <stdio.h>
#include <ctype.h>

void display_menu()
{
  printf("\n-------------------- Menu --------------------\n");
  printf("1. Add two numbers\n");
  printf("2. Check if a character is an alphabet\n");
  printf("3. Check if a character is a digit\n");
  printf("4. Exit program\n");
  printf("--------------------------------------------\n");
}

void add_two_numbers()
{
  int first_number, second_number;

  printf("\nEnter the first integer: ");
  if (scanf("%d", &first_number) != 1)
  {
    printf("Error: Invalid input. Please enter a valid integer.\n");
    while (getchar() != '\n')
      ;
    return;
  }

  printf("Enter the second integer: ");
  if (scanf("%d", &second_number) != 1)
  {
    printf("Error: Invalid input. Please enter a valid integer.\n");
    while (getchar() != '\n')
      ;
    return;
  }

  printf("\n--- Addition Result ---\n");
  printf("Sum: %d + %d = %d\n", first_number, second_number, first_number + second_number);
  printf("-----------------------\n");
}

void check_is_alphabet()
{
  char input_character;

  printf("\nEnter a character to check: ");
  if (scanf(" %c", &input_character) != 1)
  {
    printf("Error: Failed to read character.\n");
    while (getchar() != '\n')
      ;
    return;
  }

  printf("\n--- Alphabet Analysis ---\n");
  printf("Input : '%c'\n", input_character);
  printf("Result: It is %s.\n", isalpha(input_character) ? "an alphabet" : "NOT an alphabet");
  printf("-------------------------\n");
}

void check_is_digit()
{
  char input_character;

  printf("\nEnter a character to check: ");
  if (scanf(" %c", &input_character) != 1)
  {
    printf("Error: Failed to read character.\n");
    while (getchar() != '\n')
      ;
    return;
  }

  printf("\n--- Digit Analysis ---\n");
  printf("Input : '%c'\n", input_character);
  printf("Result: It is %s.\n", isdigit(input_character) ? "a digit" : "NOT a digit");
  printf("----------------------\n");
}

int main()
{
  int user_choice = 0;

  do
  {
    display_menu();
    printf("Please select an option (1-4): ");

    if (scanf("%d", &user_choice) != 1)
    {
      printf("\nError: Invalid input. Please enter a number.\n");
      while (getchar() != '\n')
        ;
      user_choice = 0;
      continue;
    }

    switch (user_choice)
    {
    case 1:
      add_two_numbers();
      break;
    case 2:
      check_is_alphabet();
      break;
    case 3:
      check_is_digit();
      break;
    case 4:
      printf("\nExiting program. Goodbye!\n\n");
      break;
    default:
      printf("\nInvalid choice. Please select an option from 1 to 4.\n");
      break;
    }
  } while (user_choice != 4);

  return 0;
}
