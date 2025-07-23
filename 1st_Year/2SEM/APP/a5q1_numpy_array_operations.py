"""
* Assignment No.: 05
* Question No.: 01

* Program: NumPy Array Aggregate Functions
* Description: This python program demonstrates how to find the minimum,
* maximum, sum, and cumulative sum of a NumPy array.

* Author: Biranchi Kulesika
* Date: 22 July, 2025
"""

import numpy as np

data_array = np.array([15, 8, 29, 42, 11, 23, 5])

print("Original Array:", data_array)

print(f"\nMinimum value: {data_array.min()}")

print(f"Maximum value: {data_array.max()}")

print(f"Sum of all elements: {data_array.sum()}")

print(f"Cumulative sum: {data_array.cumsum()}")
