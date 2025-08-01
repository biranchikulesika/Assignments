'''
Description: This Python program takes three floating-point values as run-time input
and finds the difference between the largest and the smallest number.
Author: Biranchi Kulesika
Date: 12 Nov, 2024
Assignment No.: 01
Question No.: 03
'''

num1 = float(input("Enter the first floating point number: "))
num2 = float(input("Enter the second floating point number: "))
num3 = float(input("Enter the third floating point number: "))

largest = max(num1, num2, num3)
smallest = min(num1, num2, num3)

difference = largest - smallest

print(f"The difference between the greatest and smallest number is: {difference}")
