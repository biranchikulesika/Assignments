import math


def is_prime(num):
    """Function to check if a number is prime."""
    if num <= 1:
        return False
    for i in range(2, int((math.sqrt(num)) + 1)):
        if num % i == 0:
            return False
    return True


# Input from user
max_retries = 3

for attempts in range(max_retries):
    try:
        number = int(input("\nEnter a number to check if it's prime: "))
        if is_prime(number):
            print(f"{number} is a prime number.\n")
            break
        else:
            print(f"{number} is not a prime number.\n")
            break
    except ValueError:
        print("Invalid integer entered.")
        if attempts == 2:
            print("\nThe maximum number of attempts reached.\n")
