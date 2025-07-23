"""
* Assignment No.: 09
* Question No.: 02
*
* Program: Line Plot Visualisation
* Description: This Python program uses pandas and matplotlib
* to create and display a line plot from a pandas Series.
*
* Author: Biranchi Kulesika
* Date: 23 July, 2025
"""

import pandas as pd
import matplotlib.pyplot as plt

years = list(range(2000, 2026, 2))
gdp = [476, 601, 823, 1237, 1676, 1823, 1856, 2104, 2290, 2713, 3170, 3390, 3660]
population = [1053, 1080, 1107, 1134, 1161, 1188, 1215, 1242, 1269, 1296, 1323, 1350, 1377]

dataset = {'Year': years, 'GDP': gdp, 'Population': population}

dframe = pd.DataFrame(dataset)
dframe.plot(x='Year', y=['GDP', 'Population'], title="India GDP & Population (2000-2024)")

plt.show()