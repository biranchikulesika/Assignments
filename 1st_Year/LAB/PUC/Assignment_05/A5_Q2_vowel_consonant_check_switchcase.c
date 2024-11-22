/*
 *This C program checks whether an alphabet is vowel or consonant
 *using switch-case statement
 *
 *Author: Biranchi Kulesika
 *Date: 24 Sep, 2023
 *Assignment No.: 05
 *Question No.: 02
 */

#include <ctype.h>
#include <stdio.h>

int main()
{
  char ch;

  printf("\n\nEnter an alphabet: ");

  fflush(stdout);
  scanf(" %c", &ch);

  if (isalpha(ch) == 0)
  {
    printf("The entered character is not an alphaber.\n\n");
    return 1;
  }

  ch = tolower(ch);

  switch (ch)
  {
  case 'a':
  case 'e':
  case 'i':
  case 'o':
  case 'u':
    printf("'%c' is a vowel.\n\n", ch);
    break;
  default:
    printf("'%c' is a consonant.\n\n", ch);
    break;
  }

  return 0;
}
