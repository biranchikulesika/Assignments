'''
Description: This Python program defines a Person class to calculate
and categorize the Body Mass Index (BMI) based on weight and height.
Author: Biranchi Kulesika
Date: 22 July, 2025
Assignment No.: 01
Question No.: 01
'''
class Person:
    def __init__(self, name, age, weight_kg, height_ft):
        self.name = name
        self.age = age
        self.weight = weight_kg
        self.height = height_ft

    def bmi(self):
        height_m = self.height * 0.3048
        if height_m <= 0:
            raise ValueError("Height cannot be zero")
        bmi_value = self.weight / (height_m**2)
        return round(bmi_value, 2)

    def get_bmi_result(self):
        bmi_value = self.bmi()
        if bmi_value < 18.5:
            return "Underweight"
        elif 18.5 <= bmi_value < 24.9:
            return "Healthy"
        elif 24.9 <= bmi_value < 29.9:
            return "Overweight"
        else:
            return "Obese"

    def display_info(self):
        print(f"Name: {self.name}")
        print(f"Age: {self.age}")
        print(f"Weight: {self.weight} kg")
        print(f"Height: {self.height} ft")
        print(f"BMI: {self.bmi()}")
        print(f"Remark: {self.get_bmi_result()}")

p1 = Person("Biranchi", 20, 49.5, 5.5)
p1.display_info()