'''
Description: This Python program takes two numbers as run-time input and swaps their values using a user-defined function.
Author: Biranchi Kulesika
Date: 13 Nov, 2024
Assignment No.: 03
Question No.: 02
'''

def swap_numbers(a, b):
    return b, a

try:
    num1 = float(input("Enter the first number: "))
    num2 = float(input("Enter the second number: "))

    print(f"Before swapping:\nFirst number: {num1}\nSecond number: {num2}")

    num1, num2 = swap_numbers(num1, num2);

    print(f"After swapping:\nFirst number: {num1}\nSecond number: {num2}")

except ValueError:
    print("Invalid input. Please enter numbers.")
