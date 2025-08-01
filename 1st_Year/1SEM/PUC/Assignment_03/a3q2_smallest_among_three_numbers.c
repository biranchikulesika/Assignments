/*
* Description: This C program finds the smallest number among three numbers
* entered by the user as run-time input.
* Author: Biranchi Kulesika
* Date: 20 Sep, 2023
* Assignment No.: 03
* Question No.: 02
*/

#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    int smallest = num1;
    if (num2 < smallest) {
        smallest = num2;
    }
    if (num3 < smallest) {
        smallest = num3;
    }

    printf("The smallest number is: %d\n", smallest);

    return 0;
}
