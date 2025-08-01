'''
Description: This Python program takes a number as run-time input
and checks and prints if it's a strong number or not.
Author: Biranchi Kulesika
Date: 12 Nov, 2024
Assignment No.: 02
Question No.: 04
'''

def factorial(num):
    fact = 1
    for i in range(1, num + 1):
        fact *= i
    return fact

def is_strong(num):
    original_num = num
    sum_factorial = 0

    while num != 0:
        dg = num % 10
        sum_factorial += factorial(dg)
        num //= 10

    return sum_factorial == original_num

try:
    number = int(input("Enter a number to check if it's strong: "))

    if is_strong(number):
        print(f"{number} is a strong number.")
    else:
        print(f"{number} is not a strong number.")

except ValueError:
    print("Invalid input. Please enter an integer.")
