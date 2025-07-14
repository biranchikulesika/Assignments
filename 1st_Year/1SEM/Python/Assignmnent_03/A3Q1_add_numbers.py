"""
* Assignment No.: 3
* Question No.: 1
* Date: 13 Nov, 2024

* Program Name: Sum Calculator
* Description: This python program takes multiple numbers
* as input run-time and finds their sum

* Author: Biranchi Kulesika
* Date: 9 Dec, 2024
"""


import re

# function to add numbers prsent in a list


def add_numbers(*args):
    result = 0
    for num in args:
        result += num
    return result


numbers = []

input_numbers = input("\nEnter the numbers separated by space: ")

# This code will extract the numbers from the string
# \s is for space, tab, newline
for i in re.split(r'[,;a-zA-Z\s]+', input_numbers):
    try:
        num = float(i)
        numbers.append(num)
    except ValueError:
        continue

print("\nThe extracted numbers are:")

for num in numbers:
    print(num)
total = add_numbers(*numbers)

print(f"\nTotal Sum = {total}")
