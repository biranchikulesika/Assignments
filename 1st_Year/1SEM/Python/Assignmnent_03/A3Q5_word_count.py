"""
* Assignment No.: 03
* Question No.: 05
* Date: 13 Nov, 2024

* Program Name: Word Count
* Description: This python program takes a string as run-time input
* and count the number of words in it.

* Author: Biranchi Kulesika
* Date: 14 July, 2025
"""
string = input("Enter a string: ")

words = string.split()
word_count = len(words)

print(f"Number of words in the string is: {word_count}")