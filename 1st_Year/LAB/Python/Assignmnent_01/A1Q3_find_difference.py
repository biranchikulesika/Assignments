"""
*Assignment No.: 01
*Question No.: 03
*Date: 12 Nov, 2024

* Program: Find difference
* Description: This python program takes three floating point values as run-time input
* and find the difference between the largest and the smallest number.

* Author: Biranchi Kulesika
* Date: December 7, 2024
* Version: 1.0
"""


num1 = float(input("\nEnter the first floating point number: "))
num2 = float(input("Enter the second floating point number: "))
num3 = float(input("Enter the third floating point number: "))

greatest = num1

if num2 > num1:
    greatest = num2
if num3 > num2:
    greatest = num3

smallest = num1

if num2 < num1:
    smallest = num2
if num3 < num2:
    smallest = num3

difference = greatest - smallest

print(f"\nThe difference between the greatest and smallest number is: {difference}\n")
