"""
* Assignment No.: 07
* Question No.: 02

* Program: Pandas DataFrame Column Operations
* Description: This python program demonstrates column selection, addition,
* and deletion in a Pandas DataFrame.

* Author: Biranchi Kulesika
* Date: 22 July, 2025
"""

import pandas as pd

dataset = {
    "Name": ["Biranchi", "Laxman", "Baibhab", "Jyotirmaya"],
    "Age": [21, 17, 18, 22],
    "Dist": ["Koraput", "Jajpur", "Nuapada", "Balasore"],
}

dframe = pd.DataFrame(dataset)
print(dframe)

print("\nSelecting a single column ('Name'):")
print(dframe["Name"])

print("\nSelecting multiple columns ('Name' and 'Dist'):")
print(dframe[["Name", "Dist"]])

dframe["Salary"] = [70000, 80000, 90000, 100000]

print("\nDataFrame after adding 'Salary' column:")
print(dframe)

df_after_delete = dframe.drop("Dist", axis=1)
print("DataFrame after deleting 'Dist' column:")
print(df_after_delete)
