'''
Description: This Python program takes numbers as run-time input and finds their sum.
Author: Biranchi Kulesika
Date: 13 Nov, 2024
Assignment No.: 04
Question No.: 01
'''

numbers = list(map(float, input("Enter numbers separated by space: ").split()))

total_sum = sum(numbers)

print(f"Sum of the list items: {total_sum}")
