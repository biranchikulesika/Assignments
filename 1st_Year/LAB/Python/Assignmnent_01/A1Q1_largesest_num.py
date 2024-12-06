'''
*Assignment No.: 01
*Question No.: 01
*Date: 12 Nov, 2024

* Program: Adds two Numbers
* Description: This python program takes two numbers as input 
* and calculate the sum and print the result

* Author: Biranchi Kulesika
* Date: December 6, 2024
* Version: 1.0
'''

num1 = float(input("Enter the first number: "))
num2 = float(input("Enter the second number: "))
num3 = float(input("Enter the third number: "))

# Finding the largest number
largest = num1

if num2 > largest:
    largest = num2

if num3 > largest:
    largest = num3

# Output the largest number
print("The largest number is: ", largest)