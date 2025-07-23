"""
* Assignment No.: 04
* Question No.: 03
* Date: 13 Nov, 2024

* Description: This python program takes a sentence as
* run-time input and find words with same start and end letter.

* Author: Biranchi Kulesika
* Date: 14 July, 2025
"""

def count_words_with_same_start_end(words):
    count = 0
    for word in words:
        if len(word) > 0 and word[0].lower() == word[-1].lower():
            count += 1
    return count

sentence = input("Enter a sentence: ")
words = sentence.split()
result = count_words_with_same_start_end(words)
print(f"Number of words with same start and end letter: {result}")