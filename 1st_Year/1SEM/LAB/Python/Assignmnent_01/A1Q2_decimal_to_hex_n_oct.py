"""
*Assignment No.: 01
*Question No.: 02
*Date: 12 Nov, 2024

* Program: Decimal to Oct and Hex
* Description: This python program takes an integer as 
* run-time input and prints its octal and hexadecimal equivalent

* Author: Biranchi Kulesika
* Date: December 7, 2024
* Version: 1.0
"""


# Function to convert decimal to octal
def decimal_to_octal(decimal_number):
    if decimal_number == 0:
        return "0"

    is_negative = decimal_number < 0
    decimal_number = abs(decimal_number)

    octal_number = ""

    while decimal_number > 0:
        remainder = decimal_number % 8
        octal_number = str(remainder) + octal_number
        decimal_number = decimal_number // 8

    if is_negative:
        octal_number = "-" + octal_number

    return octal_number  # End of decimal_to_octal function


# Function to convert decimal to hexadecimal
def decimal_to_hexadecimal(decimal_number):
    if decimal_number == 0:
        return "0"

    is_negative = decimal_number < 0
    decimal_number = abs(decimal_number)

    hex_digits = "0123456789ABCDEF"
    hexadecimal_number = ""

    while decimal_number > 0:
        remainder = decimal_number % 16
        hexadecimal_number = hex_digits[remainder] + hexadecimal_number
        decimal_number = decimal_number // 16

    if is_negative:
        hexadecimal_number = "-" + hexadecimal_number

    return hexadecimal_number  # End of decimal_to_hexadecimal function


# input
decimal_number = int(input("\nEnter a number: "))

hexadecimal_number = decimal_to_hexadecimal(decimal_number)
print(f"Decimal number {decimal_number} in hexadecimal is {hexadecimal_number}")

octal_number = decimal_to_octal(decimal_number)
print(f"Decimal number {decimal_number} in octal is {octal_number}\n")
