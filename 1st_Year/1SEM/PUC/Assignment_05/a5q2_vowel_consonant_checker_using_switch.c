/*
* Description: This C program checks whether an alphabet is vowel or consonant
* using a switch-case statement.
* Author: Biranchi Kulesika
* Date: 24 Sep, 2023
* Assignment No.: 05
* Question No.: 02
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    printf("Enter an alphabet: ");
    scanf(" %c", &ch);

    if (!isalpha(ch)) {
        printf("The entered character is not an alphabet.\n\n");
    } else {
        ch = tolower(ch);
        switch (ch) {
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
    }

    return 0;
}

