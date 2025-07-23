"""
* Assignment No.: 03
* Question No.: 01

* Program: Exception Handling Demonstration
* Description: This python program demonstrates how to handle several common
* built-in exceptions in Python, including ValueError, IndexError,
* NameError, TypeError, and ZeroDivisionError, using try-except blocks.

* Author: Biranchi Kulesika
* Date: 22 July, 2025
"""


#def handle_exceptions():
#    """Demonstrates handling of five common Python exceptions."""
# i) ValueError
try:
    num = int("abc")
except ValueError as e:
    print(f"Caught ValueError: {e}")

# ii) IndexError
try:
    my_list = [1, 2, 3]
    print(my_list[5])
except IndexError as e:
    print(f"Caught IndexError: {e}")

# iii) NameError
try:
    print(undefined_variable)
except NameError as e:
    print(f"Caught NameError: {e}")

# iv) TypeError
try:
    result = "2" + 2
except TypeError as e:
    print(f"Caught TypeError: {e}")

# v) ZeroDivisionError
try:
    result = 10 / 0
except ZeroDivisionError as e:
    print(f"Caught ZeroDivisionError: {e}")


# Run the demonstration
#handle_exceptions()
