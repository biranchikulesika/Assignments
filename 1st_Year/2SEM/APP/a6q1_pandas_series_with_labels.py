"""
* Assignment No.: 06
* Question No.: 01

* Program: Pandas Series with Labels
* Description: This python program demonstrates how to create and use a
* Pandas Series with custom labels (index).

* Author: Biranchi Kulesika
* Date: 22 July, 2025
"""

import pandas as pd

data = [15, 24, 70, 9, 890]
labels = ["a", "b", "c", "d", "e"]

s1 = pd.Series(data, index=labels)

print("--- Series from lists ---")
print("Pandas Series with custom labels:\n", s1)

# Accessing elements using custom labels
print("\nAccessing element with label 'c':", s1["c"])
print("Accessing multiple elements with labels 'a' and 'd':\n", s1[["a", "d"]])

# The dictionary keys automatically become the Series index (labels)
dict_data = {"USA": "Washington D.C.", "India": "New Delhi", "Japan": "Tokyo"}
s2 = pd.Series(dict_data)

print("\n--- Series from dictionary ---")
print("Series created from a dictionary:\n", s2)
print("\nAccessing the capital of India:", s2["India"])
