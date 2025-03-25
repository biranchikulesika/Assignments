"""
*Assignment No.: 02
*Question No.: 04
*Date: 12 Nov, 2024

* Program: Strong Number Check
* Description: This python program takes a number as run-time input
* and checks and prints if its strong number or not.

* Author: Biranchi Kulesika
* Date: December 9, 2024
"""


def factorial(num):
    fact = 1
    for i in range(1, num + 1):
        fact *= i
    return fact


def is_strong(num):
    original_num = num
    sum_factorial = 0

    while num != 0:
        dg = num % 10
        sum_factorial += factorial(dg)
        num //= 10

    return sum_factorial == original_num


maxretries = 3

for attempts in range(maxretries):
    try:
        number = int(input("\nEnter a number to check if its strong: "))

        if is_strong(number):
            print(f"\n{number} is a strong number.\n")
            break
        else:
            print(f"\n{number} is a not strong number.\n")
            break

    except ValueError:
        print("\nInvalid number entered.")
        if attempts == 2:
            print("The maximum number of attempts reached.\n")
        else:
            print("Try again.")
