"""
* Assignment No.: 05
* Question No.: 02

* Program: NumPy Array Attributes
* Description: This python program demonstrates the use of NumPy array
* attributes like ndim, shape, size, and dtype.

* Author: Biranchi Kulesika
* Date: 22 July, 2025
"""

import numpy as np

arr = np.array([[10, 20, 30], [40, 50, 60]])

print("Original Array:\n", arr)

print(f"
Number of dimensions (ndim): {arr.ndim}")

print(f"
Shape of the array (shape): {arr.shape}")

print(f"Total number of elements (size): {arr.size}")

print(f"Data type of the array (dtype): {arr.dtype}")