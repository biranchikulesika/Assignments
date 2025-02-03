/*
* Assignment No.: 12
* Question No.: 02
* Date:

* Program: String Reverser
* Description: This C program reverses a string using a user-defined function named reverse().
* The string is entered by the user as run-time input.

* Author: Biranchi Kulesika
* Date: 3 Feb, 2025
* Version: 1.0
*/

#include <stdio.h>
#include <string.h>

void reverse(char str[]) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    reverse(str);

    printf("Reversed string: %s\n", str);

    return 0;
}