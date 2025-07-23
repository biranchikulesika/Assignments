/*This C program create a list of actions to perfrom such as
 *1)add two integers
 *2)check a character is alphabet or not
 *3)check whether a character is a digit or not
 *4)exit
 *
 *and implement the menu given
 *
 *Author: Biranchi Kulesika
 *Date: 24 Sep, 2023
 *Assignment No.: 05
 *Question No.: 03
 */

#include <stdio.h>
#include <ctype.h>

int main()
{
  int choice, num1, num2, sum;
  char ch;

  printf("\n----------------Menu---------------\n");
  printf("1. Add two number\n");
  printf("2. Check if a character is an alphabet\n");
  printf("3. Check if a character is a digit\n");
  printf("4. Exit program\n");
  printf("----------------------------------------\n");

  printf("\nPlease select an option(1-4): ");
  fflush(stdin);
  scanf("%d", &choice);

  switch (choice)
  {
  case 1:
    printf("\nEnter the first integer: ");
    fflush(stdin);
    scanf("%d", &num1);
    fflush(stdin);
    printf("Enter the second integer: ");
    scanf("%d", &num2);

    sum = num1 + num2;
    printf("\nThe entered numbers are %d and %d.\n", num1, num2);
    printf("Sum = %d + %d = %d\n\n", num1, num2, sum);
    break;

  case 2:

    printf("\nWelcome to alphabet checker.");
    printf("\n\nEnter a character: ");
    fflush(stdin);
    scanf(" %c", &ch);

    if (isalpha(ch))
    {
      printf("\nThe '%c' is an alphabet.\n\n", ch);
    }
    else
    {
      printf("\nThe '%c' is not an alphabet.\n\n", ch);
    }
    break;

  case 3:

    printf("\nWelcome to digit checker.");
    printf("\n\nEnter a character: ");
    fflush(stdin);
    scanf("%c", &ch);

    if (isdigit(ch))
    {
      printf("'%c' is a digit.\n\n", ch);
    }
    else
    {
      printf("'%c' is not a digit.\n\n", ch);
    }
    break;

  case 4:
    printf("\nExiting...\n");
    return 0;

  default:
    printf("Invalid choice. Try again.\n\n");
    break;
  }

  return 0;
}
