/*
* Assignment No.: 12
* Question No.: 04
* Date:

* Program: Vowel Counter
* Description: This C program counts the number of vowels in a string using a user-defined function named count_vowel().
* The string is entered by the user as run-time input.

* Author: Biranchi Kulesika
* Date: 3 Feb, 2025
* Version: 1.0
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int count_vowel(char str[]) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
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

    int num_vowels = count_vowel(str);

    printf("Number of vowels: %d\n", num_vowels);

    return 0;
}