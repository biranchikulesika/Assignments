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

# 1. ndim: Returns the number of array dimensions.
print(f"\nNumber of dimensions (ndim): {arr.ndim}")

# 2. shape: Returns a tuple of array dimensions.
print(f"Shape of the array (shape): {arr.shape}")

# 3. size: Returns the total number of elements in the array.
print(f"Total number of elements (size): {arr.size}")

# 4. dtype: Returns the data type of the elements in the array.
print(f"Data type of the array (dtype): {arr.dtype}")