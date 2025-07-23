"""
* Assignment No.: 09
* Question No.: 01
*
* Program: Histogram Visualisation
* Description: This Python program uses the pandas library's
* inbuilt visualization capabilities to plot Histogram
*
* Author: Biranchi Kulesika
* Date: 23 July, 2025
"""

import pandas as pd
import numpy as np
import matplotlib.pyplot as plt

dataset = np.random.randn(1000)
print(dataset)

plt.hist(dataset, bins=100, color="skyblue", edgecolor="black")

plt.xlabel("Value")
plt.ylabel("Frequency")
plt.title("Number of values generated")
plt.show()
