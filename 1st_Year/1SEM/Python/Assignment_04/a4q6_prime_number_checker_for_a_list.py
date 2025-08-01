'''
Description: This Python program takes numbers as input
and checks if the numbers are prime or not in a given list.
Author: Biranchi Kulesika
Date: 13 Nov, 2024
Assignment No.: 04
Question No.: 06
'''

def is_prime(n):
	if n < 2:
		return False
	for i in range(2, int(n**0.5)+1):
		if n%i == 0:
			return False
	return True

numbers = list(map(int, input("Enter numbers separated by space: ").split()))

prime_result = {num: is_prime(num) for num in numbers}

for num, is_prime_flag in prime_result.items():
	if is_prime_flag:
		print(f"{num} is a prime number.")
	else:
		print(f"{num} is not a prime number.")
