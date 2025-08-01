/*
* Description: This C program checks whether an alphabet input is vowel or consonant.
* Author: Biranchi Kulesika
* Date: 12 Sep, 2023
* Assignment No.: 02
* Question No.: 02
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    printf("Enter an alphabet: ");
    scanf("%c", &ch);

    if (isalpha(ch)) {
        char lower_ch = tolower(ch);
        if (lower_ch == 'a' || lower_ch == 'e' || lower_ch == 'i' || lower_ch == 'o' || lower_ch == 'u') {
            printf("'%c' is a vowel.\n", ch);
        } else {
            printf("'%c' is a consonant.\n", ch);
        }
    } else {
        printf("The entered character '%c' is not an alphabet.\n", ch);
    }

    return 0;
}
