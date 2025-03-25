/*
 *This C program checks whether an alphabet input is vowel or consonant
 *using nested if
 *
 *Author: Biranchi Kulesika
 *Date: 12 Sep, 2023
 *Assignment No.: 02
 *Question No.: 02
 */

#include <ctype.h>
#include <stdio.h>

int main() {

  char ch;

  printf("\n\nEnter an alphabet: ");
  scanf("%c", &ch);

  if (isalpha(ch)) {
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
      printf("'%c' is a vowel.\n\n", ch);
    } else {
      printf("'%c' is a consonant.\n\n", ch);
    }
  } else
    printf("The enter character '%c' is not an alphabet\n\n", ch);

  return 0;
}
