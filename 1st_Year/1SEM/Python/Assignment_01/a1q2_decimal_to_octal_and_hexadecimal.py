'''
Description: This Python program takes an integer as run-time input and prints its octal and hexadecimal equivalent.
Author: Biranchi Kulesika
Date: 12 Nov, 2024
Assignment No.: 01
Question No.: 02
'''

decimal_number = int(input("Enter a number: "))

# Convert to hexadecimal using built-in function
hexadecimal_number = hex(decimal_number)
print(f"Decimal number {decimal_number} in hexadecimal is {hexadecimal_number}")

# Convert to octal using built-in function
octal_number = oct(decimal_number)
print(f"Decimal number {decimal_number} in octal is {octal_number}")
