"""
* Assignment No.: 04
* Question No.: 04
* Date: 13 Nov, 2024

* Program Name: Remove Duplicates
* Description: This python program takes numbers/words as list
* and removes the duplicate item.

* Author: Biranchi Kulesika
* Date: 14 July, 2025
"""

def remove_duplicates(lst):
    return list(set(lst))

items = input("Enter elements separated by space: ").split()

unique_items = remove_duplicates(items)

print("List after removing duplicates:", unique_items)
