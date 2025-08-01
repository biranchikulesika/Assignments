'''
Description: This Python program takes multiple numbers as input and finds their sum.
Author: Biranchi Kulesika
Date: 13 Nov, 2024
Assignment No.: 03
Question No.: 01
'''

numbers_str = input("Enter numbers separated by spaces: ")

numbers = []
for s in numbers_str.split():
    try:
        numbers.append(float(s))
    except ValueError:
        print(f"Warning: '{s}' is not a valid number and will be ignored.")

if numbers:
    total = sum(numbers)
    print(f"The numbers entered are: {numbers}")
    print(f"Total Sum = {total}")
else:
    print("No valid numbers were entered.")
