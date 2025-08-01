/*
* Description: This program finds all the perfect numbers between two numbers
* entered by the user as runtime input.
* Author: Biranchi Kulesika
* Date: November 25, 2024
* Assignment No.: 07
* Question No.: 02
*/

#include <stdio.h>
#include <stdbool.h>

bool isPerfect(int num) {
    int sum = 0;
    for (int i = 1; i * 2 <= num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum == num && num != 0;
}

int main() {
    int num1, num2, temp;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    if (num1 < 0 || num2 < 0) {
        printf("Numbers cannot be negative. Try again.\n");
        return 1;
    }

    if (num1 > num2) {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }

    printf("Perfect numbers between %d and %d: ", num1, num2);
    int found_count = 0;
    bool first_perfect = true;

    for (int i = num1; i <= num2; i++) {
        if (isPerfect(i)) {
            if (!first_perfect) {
                printf(", ");
            }
            printf("%d", i);
            first_perfect = false;
            found_count++;
        }
    }

    if (found_count == 0) {
        printf("No perfect numbers found in the given range.\n");
    } else {
        printf("\nNumber of perfect numbers found: %d\n", found_count);
    }

    return 0;
}
