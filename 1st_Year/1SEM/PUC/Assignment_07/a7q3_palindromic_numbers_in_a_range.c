/*
* Description: This program finds all the palindromic numbers between two numbers
* entered by the user as runtime input.
* Author: Biranchi Kulesika
* Date: November 26, 2024
* Assignment No.: 07
* Question No.: 03
*/

#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int num) {
    int originalNum = num;
    int digit, reverseNum = 0;

    while (num != 0) {
        digit = num % 10;
        reverseNum = reverseNum * 10 + digit;
        num /= 10;
    }
    return originalNum == reverseNum;
}

void printPalindromes(int a, int b) {
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    if (a <= 0 || b <= 0) {
        printf("Please enter valid numbers. Both numbers must be positive and not zero.\n");
        return;
    }

    printf("Palindromic numbers between %d and %d are: ", a, b);
    bool first_palindrome = true;
    for (int i = a; i <= b; i++) {
        if (isPalindrome(i)) {
            if (!first_palindrome) {
                printf(", ");
            }
            printf("%d", i);
            first_palindrome = false;
        }
    }
    printf("\n");
}

int main() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    printPalindromes(num1, num2);

    return 0;
}
