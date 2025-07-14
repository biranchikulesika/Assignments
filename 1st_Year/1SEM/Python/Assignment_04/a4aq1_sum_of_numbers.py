"""
* Assignment No.: 04
* Question No.: 01
* Date: 13 Nov, 2024

* Program Name: Sum of Numbers
* Description: This python program takes numbers as
* run-time input and find the sum.

* Author: Biranchi Kulesika
* Date: 14 July, 2025
"""

numbers = list(map(float, input("Enter numbers separated by space: ").split()))

total_sum = sum(numbers)

print(f"Sum of the list items: {total_sum}")