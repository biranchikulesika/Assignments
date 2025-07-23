"""
* Assignment No.: 09
* Question No.: 04
*
* Program: Bar Plot Visualisation
* Description: This Python program uses pandas and matplotlib
* to create and display a bar plot from a pandas DataFrame,
* showing a comparison between different categories.
*
* Author: Biranchi Kulesika
* Date: 23 July, 2025
"""

import pandas as pd
import matplotlib.pyplot as plt

data = {
    'Fruit': ['Apple', 'Banana', 'Mango', 'Litchi', 'Guava'],
    'Popularity': [45, 80, 102, 27, 35]
}
df = pd.DataFrame(data)

df.plot.bar(x='Fruit', y='Popularity', color='skyblue', edgecolor='black', legend=False)

plt.title('Popularity of Different Fruits')
plt.xlabel('Fruit')
plt.ylabel('Popularity Score')
plt.xticks(rotation=0)
plt.tight_layout()

plt.show()