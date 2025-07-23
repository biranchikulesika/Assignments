"""
* Assignment No.: 09
* Question No.: 03
*
* Program: Scatter Plot Visualisation
* Description: This Python program uses pandas and matplotlib
* to create and display a scatter plot from a pandas DataFrame,
* showing the relationship between two variables.
*
* Author: Biranchi Kulesika
* Date: 23 July, 2025
"""

import pandas as pd
import matplotlib.pyplot as plt

data = {
    'Height': [155, 158, 162, 165, 168, 170, 172, 175, 178, 180, 150, 152, 154, 157, 160, 163, 166, 169, 171, 174],
    'Weight': [48, 50, 53, 56, 59, 62, 65, 68, 71, 74, 45, 47, 49, 51, 54, 57, 60, 63, 66, 69],
    'Gender': ['Girl', 'Girl', 'Girl', 'Girl', 'Girl', 'Girl', 'Girl', 'Girl', 'Girl', 'Girl',
               'Boy', 'Boy', 'Boy', 'Boy', 'Boy', 'Boy', 'Boy', 'Boy', 'Boy', 'Boy']
}
df = pd.DataFrame(data)

boys = df[df['Gender'] == 'Boy']
plt.scatter(boys['Height'], boys['Weight'], color='blue', label='Boys')

girls = df[df['Gender'] == 'Girl']
plt.scatter(girls['Height'], girls['Weight'], color='red', label='Girls')

plt.title('Scatter Plot of Height vs Weight by Gender (Indian Teenagers)')
plt.xlabel('Height (cm)')
plt.ylabel('Weight (kg)')
plt.legend()

plt.show()
