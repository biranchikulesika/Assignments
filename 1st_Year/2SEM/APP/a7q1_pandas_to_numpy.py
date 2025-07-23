"""
* Assignment No.: 07
* Question No.: 01

* Program: Pandas to NumPy Conversion
* Description: This python program demonstrates how to convert a Pandas Series
* and a Pandas DataFrame into a NumPy array.

* Author: Biranchi Kulesika
* Date: 22 July, 2025
"""

import pandas as pd
import numpy as np

dataset1 = {
    "Name": ["Biranchi", "Laxman", "Baibhab", "Jyotirmaya"],
    "Add": ["Koraput", "Jajpur", "Nuapada", "Balasore"],
}

dframe = pd.DataFrame(dataset1)
numpy_arr1 = dframe.to_numpy()
print("Numpy array is: ", numpy_arr1)

series = pd.Series([23, 53, 65, 23, 54])
numpy_arr2 = series.to_numpy()
print("Numpy array is: ", numpy_arr2)
