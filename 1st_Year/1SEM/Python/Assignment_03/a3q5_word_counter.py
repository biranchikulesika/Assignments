'''
Description: This Python program takes a string as run-time input
and counts the number of words in it.
Author: Biranchi Kulesika
Date: 13 Nov, 2024
Assignment No.: 03
Question No.: 05
'''
string = input("Enter a string: ")

words = string.split()
word_count = len(words)

print(f"Number of words in the string is: {word_count}")
