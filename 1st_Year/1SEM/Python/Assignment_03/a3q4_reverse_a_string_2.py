'''
Description: This Python program takes a string as run-time input and reverses and prints it.
Author: Biranchi Kulesika
Date: 13 Nov, 2024
Assignment No.: 03
Question No.: 04
'''

string = input("Enter a sentence to reverse it: ")
print(f"The entered string is: {string}")
reverse = string[::-1]

print(f"The original string is: {string}")
print(f"The reversed string is: {reverse}")
