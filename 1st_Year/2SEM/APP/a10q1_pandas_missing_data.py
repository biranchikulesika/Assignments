"""
* Assignment No.: 10
* Question No.: 01
*
* Program: Handling Missing Data in Pandas
* Description: This Python program demonstrates how to find and replace
* missing data in a pandas DataFrame.
*
* Author: Biranchi Kulesika
* Date: 23 July, 2025
"""

import pandas as pd
import numpy as np

data = {
    "Name": ["Biranchi", "Baibhab", np.nan, "Laxman", "Jyotirmaya"],
    "Age": [20, 18, 22, np.nan, 23],
    "Score": [85.5, np.nan, 78.0, 92.5, 88.0],
}
df = pd.DataFrame(data)

print("Original DataFrame with missing data:")
print(df)
print("-" * 30)

print("\nFinding missing data using isnull():")
print(df.isnull())
print("-" * 30)

fill_values = {"Name": "Unknown", "Age": df["Age"].mean()}
df_filled_dict = df.fillna(value=fill_values)
print("\nDataFrame after replacing NA with column-specific values:")
print(df_filled_dict)
