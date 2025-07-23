"""
* Assignment No.: 04
* Question No.: 05
* Date: 13 Nov, 2024

* Program Name: Find the common item
* Description: This python program takes items in two list
* and check if it has atleast on common element.

* Author: Biranchi Kulesika
* Date: 14 July, 2025
"""

def has_common_element(list1, list2):
    return bool(set(list1) & set(list2))

list1 = input("Enter items for the first list (space-separated): ").split()
list2 = input("Enter items for the second list (space-separated): ").split()

if has_common_element(list1, list2):
    print("The lists have at least one common element.")
else:
    print("The lists have no common elements.")
