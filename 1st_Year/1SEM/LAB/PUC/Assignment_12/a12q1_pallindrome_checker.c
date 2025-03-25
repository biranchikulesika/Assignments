/*
* Assignment No.: 12
* Question No.: 01
* Date:

* Program: Palindrome Checker
* Description: This C program checks whether a string is a palindrome using a user-defined function named checkPalindrome().
* The string is entered by the user as run-time input.

* Author: Biranchi Kulesika
* Date: 3 Feb, 2025
* Version: 1.0
*/

#include <stdio.h>
#include <string.h>

int checkPalindrome(char str[]) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    if (checkPalindrome(str)) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is not a palindrome.\n", str);
    }

    return 0;
}