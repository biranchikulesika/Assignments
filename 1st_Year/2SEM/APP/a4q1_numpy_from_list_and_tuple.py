"""
* Assignment No.: 04
* Question No.: 01

* Program: NumPy Array from List and Tuple
* Description: This python program demonstrates how to create NumPy arrays
* from a Python list and a Python tuple.

* Author: Biranchi Kulesika
* Date: 22 July, 2025
"""

import numpy as np

list_data = [2, 5, 8, 12, 16, 25]
tuple_data = (3, 5, 62, 53, 53)

np_array_from_list = np.array(list_data, dtype=float)
np_array_from_tuple = np.array(tuple_data, dtype=float)

print("NumPy Array from List:", np_array_from_list)
print("Data type:", np_array_from_list.dtype)
print("NumPy Array from Tuple:", np_array_from_tuple)
print("Data type:", np_array_from_tuple.dtype)
