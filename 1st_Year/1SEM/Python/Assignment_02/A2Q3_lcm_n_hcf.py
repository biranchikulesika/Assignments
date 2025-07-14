"""
*Assignment No.: 02
*Question No.: 03
*Date: 12 Nov, 2024

* Program: Find LCM and HCF
* Description: This python program takes two numbers as run-time input
* and find its HCF an LCM using user define function

* Author: Biranchi Kulesika
* Date: December 8, 2024
* Version: 1.0
"""


# function to find HCF using Euclidean Lemma Division
def hcf(a, b):
    while b:
        a, b = b, a % b
    return a


# fuction to find LCM using the lcm formula
def lcm(a, b):
    prod = a*b
    h = hcf(a, b)
    l = prod / h
    return l


maxretries = 3

for attempts in range(maxretries):
    try:
        num1 = int(input("\nEnter the first number: "))
        num2 = int(input("Enter the second number: "))

        print(f"\nHCF of ({num1}, {num2}) is {int(hcf(num1, num2))}")
        print(f"LCM of ({num1}, {num2}) is {int(lcm(num1, num2))}\n")
        break

    except ValueError:
        print("\nInvalid number entered.")
        if attempts == 2:
            print("The maximum number of attempts reached.\n")
        else:
            print("Try again.")
