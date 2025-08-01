/*
* Description: This C program checks whether an entered character
* is an alphabet, digit, or special character.
* If it is an alphabet, the program further checks
* whether it is a vowel or consonant, and whether it
* is uppercase or lowercase.
* Author: Biranchi Kulesika
* Date: 23 Sep, 2023
* Assignment No.: 04
* Question No.: 01
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (isalpha(ch)) {
        char lower_ch = tolower(ch);
        const char* case_type = isupper(ch) ? "uppercase" : "lowercase";
        const char* char_type = (lower_ch == 'a' || lower_ch == 'e' || lower_ch == 'i' || lower_ch == 'o' || lower_ch == 'u') ? "vowel" : "consonant";
        printf("'%c' is an %s %s.\n", ch, case_type, char_type);
    } else if (isdigit(ch)) {
        printf("'%c' is a digit.\n", ch);
    } else {
        printf("'%c' is a special character.\n", ch);
    }

    return 0;
}
