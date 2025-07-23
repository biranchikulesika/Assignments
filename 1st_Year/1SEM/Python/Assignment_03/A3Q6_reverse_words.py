"""
* Assignment No.: 03
* Question No.: 06
* Date: 13 Nov, 2024

* Program Name: Reverse Word
* Description: This python program takes multiple words as input one by one
* and print them in reverse order

* Author: Biranchi Kulesika
* Date: 14 July, 2025
"""
words = []
print("Enter words one by one (type \"STOP\" to finish):")

while True:
	word = input()
	if word.upper() == "STOP":
		break
	words.append(word)

reversed_words = " ".join(words[::-1])
print("Reversed words:", reversed_words)