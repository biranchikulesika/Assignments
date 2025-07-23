"""
* Assignment No.: 08
* Question No.: 01

* Program: Pandas GroupBy Operations
* Description: This python program demonstrates how to group a DataFrame
* by a column and perform aggregate functions on the groups.

* Author: Biranchi Kulesika
* Date: 22 July, 2025
"""

import pandas as pd

dataset = {
    "Name": ["Biranchi", "Laxman", "Baibhab", "Jyotirmaya"],
    'Salary': [70000, 80000, 75000, 95000],
    'YearsExperience': [5, 3, 4, 7]
}

dframe = pd.DataFrame(dataset)
print(dframe)

print("\nTop Two Salary:")
top2_salary = dframe.nlargest(2, 'Salary')
print(top2_salary)

print("\nLowest Two Experience:")
bottom2_experience = dframe.nsmallest(2, 'YearsExperience')
print(bottom2_experience)
