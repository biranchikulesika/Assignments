'''
Description: This Python program takes two numbers as run-time input
and finds their HCF and LCM using user-defined functions.
Author: Biranchi Kulesika
Date: 12 Nov, 2024
Assignment No.: 02
Question No.: 03
'''

def hcf(a, b):
    while b:
        a, b = b, a % b
    return a

def lcm(a, b):
    return (a * b) // hcf(a, b)

try:
    num1 = int(input("Enter the first number: "))
    num2 = int(input("Enter the second number: "))

    print(f"HCF of ({num1}, {num2}) is {hcf(num1, num2)}")
    print(f"LCM of ({num1}, {num2}) is {lcm(num1, num2)}")

except ValueError:
    print("Invalid input. Please enter integers.")
