'''
Description: This Python program demonstrates how to handle several common
built-in exceptions in Python, including ValueError, IndexError,
NameError, TypeError, and ZeroDivisionError, using try-except blocks.
Author: Biranchi Kulesika
Date: 22 July, 2025
Assignment No.: 03
Question No.: 01
'''
# ValueError
try:
    num = int("abc")
except ValueError as e:
    print(f"Caught ValueError: {e}")

# IndexError
try:
    my_list = [1, 2, 3]
    print(my_list[5])
except IndexError as e:
    print(f"Caught IndexError: {e}")

# NameError
try:
    print(undefined_variable)
except NameError as e:
    print(f"Caught NameError: {e}")

# TypeError
try:
    result = "2" + 2
except TypeError as e:
    print(f"Caught TypeError: {e}")

# ZeroDivisionError
try:
    result = 10 / 0
except ZeroDivisionError as e:
    print(f"Caught ZeroDivisionError: {e}")