'''
Description: This Python program takes a number as input and checks whether it is a prime number or not.
Author: Biranchi Kulesika
Date: 12 Nov, 2024
Assignment No.: 02
Question No.: 01
'''

import math

def is_prime(num):
    if num <= 1:
        return False
    for i in range(2, int(math.sqrt(num)) + 1):
        if num % i == 0:
            return False
    return True

try:
    number = int(input("Enter a number to check if it's prime: "))
    if is_prime(number):
        print(f"{number} is a prime number.")
    else:
        print(f"{number} is not a prime number.")
except ValueError:
    print("Invalid input. Please enter an integer.")
