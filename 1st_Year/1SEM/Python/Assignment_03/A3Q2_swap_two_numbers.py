"""
* Assignment No.: 03
* Question No.: 02
* Date: 13 Nov, 2024

* Program Name: Swap Two Number
* Description: This python program takes two numbers as
* run-time input and swap their values using a user-defined function

* Author: Biranchi Kulesika
* Date: 9 Dec, 2024
"""


def swap_numbers(a, b):

    a, b = b, a
    return a, b


maxretries = 3

for attempts in range(maxretries):
    try:

        num1 = float(input("\nEnter the first number: "))
        num2 = float(input("Enter the second number: "))

        print(f"\nBefore swapping:")
        print(f"First number: {num1}")
        print(f"Second number: {num2}\n")

        num1, num2 = swap_numbers(num1, num2)

        print(f"\nAfter swapping:")
        print(f"First number: {num1}")
        print(f"Second number: {num2}\n")
        break

    except ValueError:
        print("\nInvalid number entered.")
        if attempts == 2:
            print("The maximum number of attempts reached.\n")
        else:
            print("Try again.")
