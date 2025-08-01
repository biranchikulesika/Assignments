'''
Description: This Python program takes a number as input and checks whether it is a perfect number or not.
Author: Biranchi Kulesika
Date: 12 Nov, 2024
Assignment No.: 02
Question No.: 02
'''

def is_perfect(num):
    if num < 1:
        return False

    sum_divisors = 0
    for i in range(1, num // 2 + 1):
        if num % i == 0:
            sum_divisors += i

    return sum_divisors == num

try:
    number = int(input("Enter a number: "))

    if is_perfect(number):
        print(f"{number} is a perfect number.")
    else:
        print(f"{number} is not a perfect number.")

except ValueError:
    print("Invalid input. Please enter an integer.")
