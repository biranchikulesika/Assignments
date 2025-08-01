/*
* Description: This C program checks whether an integer input is odd or even
* without using modulo operator(%).
* Author: Biranchi Kulesika
* Date: 12 Sep, 2023
* Assignment No.: 02
* Question No.: 01
*/

#include <stdio.h>

int main(){
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num & 1) {
        printf("%d is an odd number.\n", num);
    } else {
       printf("%d is an even number.\n", num);
    }
    
    return 0;
}
