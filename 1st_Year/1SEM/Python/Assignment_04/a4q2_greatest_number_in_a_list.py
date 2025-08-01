'''
Description: This Python program takes numbers as run-time input and finds the greatest number.
Author: Biranchi Kulesika
Date: 13 Nov, 2024
Assignment No.: 04
Question No.: 02
'''

numbers = list(map(float, input("Enter numbers separated by spaces: ").split()))

largest = max(numbers)

print(f"The largest number in the list is: {largest}")
