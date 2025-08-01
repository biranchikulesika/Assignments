/*
* Description: This C program creates a menu-driven program to perform various actions:
* 1) Add two integers
* 2) Check if a character is an alphabet
* 3) Check if a character is a digit
* 4) Exit
* Author: Biranchi Kulesika
* Date: 24 Sep, 2023
* Assignment No.: 05
* Question No.: 03
*/

#include <stdio.h>
#include <ctype.h>

void clear_input_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    int choice, num1, num2;
    char ch;

    do {
        printf("\n----------------Menu---------------\n");
        printf("1. Add two numbers\n");
        printf("2. Check if a character is an alphabet\n");
        printf("3. Check if a character is a digit\n");
        printf("4. Exit program\n");
        printf("----------------------------------------\n");

        printf("Please select an option (1-4): ");
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter a number between 1 and 4.\n");
            clear_input_buffer();
            continue;
        }
        clear_input_buffer(); // Clear the newline character after reading integer

        switch (choice) {
            case 1:
                printf("\nEnter the first integer: ");
                scanf("%d", &num1);
                printf("Enter the second integer: ");
                scanf("%d", &num2);
                printf("\nSum = %d + %d = %d\n", num1, num2, num1 + num2);
                break;

            case 2:
                printf("\nEnter a character to check if it's an alphabet: ");
                scanf(" %c", &ch); // Space before %c to consume any leftover newline
                if (isalpha(ch)) {
                    printf("\n'%c' is an alphabet.\n", ch);
                } else {
                    printf("\n'%c' is not an alphabet.\n", ch);
                }
                break;

            case 3:
                printf("\nEnter a character to check if it's a digit: ");
                scanf(" %c", &ch); // Space before %c to consume any leftover newline
                if (isdigit(ch)) {
                    printf("\n'%c' is a digit.\n", ch);
                } else {
                    printf("\n'%c' is not a digit.\n", ch);
                }
                break;

            case 4:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice. Please enter a number between 1 and 4.\n");
                break;
        }
    } while (choice != 4);

    return 0;
}
