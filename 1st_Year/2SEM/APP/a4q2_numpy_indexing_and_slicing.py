"""
* Assignment No.: 04
* Question No.: 02

* Program: NumPy Indexing and Slicing
* Description: This python program demonstrates various ways to access and
* manipulate data in a NumPy array, including slicing, integer array indexing,
* and boolean array indexing.

* Author: Biranchi Kulesika
* Date: 22 July, 2025
"""

import numpy as np

arr = np.array([11, 22, 33, 44, 55, 66, 77, 88, 99, 110])

print("Original Array:", arr)

print("\nFirst three elements:", arr[0:3])
print("\nElements from index 2 to 4:", arr[2:4])
print("\nElement at index 4:", arr[4])
print("\nEvery other element from start to index 8:", arr[:8:2])

print("\nSelecting elements at indices 0, 3, and 5:", arr[[0, 3, 5]])
print("\nSelecting element at index 2 multiple times:", arr[[2, 2, 2, 2]])

bool_arr = arr > 50
print("\nBoolean mask for 'arr > 50':\n", bool_arr)
