'''
Description: This Python program takes three numbers as input and finds the largest among them.
Author: Biranchi Kulesika
Date: 12 Nov, 2024
Assignment No.: 01
Question No.: 01
'''

num1 = float(input("Enter the first number: "))
num2 = float(input("Enter the second number: "))
num3 = float(input("Enter the third number: "))

largest = num1

if num2 > largest:
    largest = num2

if num3 > largest:
    largest = num3

print("The largest number is: ", largest)
