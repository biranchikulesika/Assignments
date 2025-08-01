/*
* Description: This C program reverses a string using a user-defined stack.
* The string is entered by the user as run-time input.
* Author: Biranchi Kulesika
* Date: 24 July, 2025
* Assignment No.: 12
* Question No.: 03
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STACK_SIZE 100

char stack[MAX_STACK_SIZE];
int top = -1;

void push(char c) {
    if (top < MAX_STACK_SIZE - 1) {
        stack[++top] = c;
    }
}

char pop() {
    if (top >= 0) {
        return stack[top--];
    }
    return '\0';
}

void reverseString(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        push(str[i]);
    }

    for (int i = 0; i < len; i++) {
        str[i] = pop();
    }
}

int main() {
    char str[MAX_STACK_SIZE];
    printf("Enter string: ");
    if (fgets(str, sizeof(str), stdin)) {
        size_t len = strlen(str);
        if (len > 0 && str[len - 1] == '\n') {
            str[len - 1] = '\0';
        }
        reverseString(str);
        printf("Reversed string: %s\n", str);
    }
    return 0;
}
