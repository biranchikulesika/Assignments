"""
*Assignment No.: 02
*Question No.: 02
*Date: 12 Nov, 2024

* Program: Prime Number Checker
* Description: This python program takes a number as input
* and checks prints whether it is a perfect number or not.

* Author: Biranchi Kulesika
* Date: December 7, 2024
* Version: 1.0
"""


def is_perfect(num):
    if num < 1:
        return False

    sum_divisors = 0

    for i in range(1, num // 2 + 1):
        if num % i == 0:
            sum_divisors += i

    if sum_divisors == num:
        return True
    return False


print("\nPerfect number Checker.")
max_tries = 3

for attempts in range(max_tries):
    try:
        number = int(input("Enter a number: "))

        if is_perfect(number):
            print(f"\n{number} is a perfect number.\n")
            break
        else:
            print(f"\n{number} is not a perfect number.\n")
            break

    except ValueError:
        print("\nInvalid integer entered.")
        if attempts == 2:
            print("The maximum number of attempts reached.\n")
        else:
            print("Try again.")
