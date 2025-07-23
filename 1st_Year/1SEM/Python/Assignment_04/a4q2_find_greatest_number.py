"""
* Assignment No.: 04
* Question No.: 02
* Date: 13 Nov, 2024

* Program Name: Find the greatest numbers
* Description: This python program takes numbers as
* run-time input and find the greatest number

* Author: Biranchi Kulesika
* Date: 14 July, 2025
"""

numbers = list(map(float, input("Enter numbers separated by spaces: ").split()))

largest = max(numbers)

print(f"The largest number in the list is: {largest}")