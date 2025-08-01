/*
* Description: This C program checks whether a character is an alphabet, digit, or special character.
* Author: Biranchi Kulesika
* Date: 24 Sep, 2023
* Assignment No.: 05
* Question No.: 01
*/

#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        printf("'%c' is an alphabet.\n", ch);
    } else if (ch >= '0' && ch <= '9') {
        printf("'%c' is a digit.\n", ch);
    } else {
        printf("'%c' is a special character.\n", ch);
    }

    return 0;
}
