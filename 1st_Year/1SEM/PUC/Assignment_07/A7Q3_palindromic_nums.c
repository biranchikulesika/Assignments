/*Assignment No.: 07
 *Question No.: 03

 * Program: Palindromic Numbers Finder
 * Description: This program finds all the perfect numbers between two numbers
 * entered by the user as runtime input.

 * Author: Biranchi Kulesika
 * Date: November 26, 2024
 * Version: 1.0
 *
 */

#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int num)
{
    int originalNum = num; // Store the original number for comparison.
    int dg, reverseNum = 0;

    // Reverse the number
    while (num != 0)
    {
        dg = num % 10;
        reverseNum = reverseNum * 10 + dg;
        num /= 10;
    }
    // return either true or false after comparing the orginal num and reversed num.
    return originalNum == reverseNum;
}

void printPalindromes(int a, int b)
{
    if (a > b)
    {
        // Swap the values if a > b
        int temp = a;
        a = b;
        b = temp;
    }

    // Check if a or b are valid (positive numbers)
    if (a <= 0 || b <= 0)
    {
        printf("Please enter valid numbers. Both numbers must be positive and not zero.\n");
        return;
        // return; is used when you want to exit from a void function
    }

    printf("Palindromic numbers between %d and %d are:\n", a, b);
    for (int i = a; i <= b; i++)
    {
        if (isPalindrome(i))
        {
            printf("%d\n", i);
        }
    }
}

int main()
{
    int num1, num2;

    printf("\nEnter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    printPalindromes(num1, num2);

    printf("\n=======Code Execution Completed=======\n");

    return 0;
}
