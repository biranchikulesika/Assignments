/*
* Assignment No.: 12
* Question No.: 03
* Date:

* Program: Word Counter
* Description: This C program counts the number of words in a string using a user-defined function named word_count().
* The string is entered by the user as run-time input.

* Author: Biranchi Kulesika
* Date: 3 Feb, 2025
* Version: 1.0
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int word_count(char str[]) {
    int count = 0;
    int in_word = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (isspace(str[i])) {
            in_word = 0;
        } else if (in_word == 0) {
            in_word = 1;
            count++;
        }
    }

    return count;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    int num_words = word_count(str);

    printf("Number of words: %d\n", num_words);

    return 0;
}