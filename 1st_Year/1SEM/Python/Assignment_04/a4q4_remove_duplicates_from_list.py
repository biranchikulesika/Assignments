'''
Description: This Python program takes numbers/words as a list
and removes duplicate items.
Author: Biranchi Kulesika
Date: 13 Nov, 2024
Assignment No.: 04
Question No.: 04
'''

def remove_duplicates(lst):
    return list(set(lst))

items = input("Enter elements separated by space: ").split()

unique_items = remove_duplicates(items)

print("List after removing duplicates:", unique_items)