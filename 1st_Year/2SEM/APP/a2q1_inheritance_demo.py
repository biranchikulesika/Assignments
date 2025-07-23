"""
* Assignment No.: 02
* Question No.: 01

* Program: Inheritance Demo
* Description: This python program demonstrates different types of inheritance
* in Python: single, multiple, multilevel, and hierarchical.

* Author: Biranchi Kulesika
* Date: 22 July, 2025
"""


# --- 1. Single Inheritance ---
# One child class inherits from one parent class.
class Animal:
    def speak(self):
        print("Animal speaks")


class Dog(Animal):
    def bark(self):
        print("Dog barks")


print("--- Single Inheritance ---")
d = Dog()
d.speak()
d.bark()


# --- 2. Multiple Inheritance ---
# A child class inherits from more than one parent class.
class Flyer:
    def fly(self):
        print("Can fly")


class Swimmer:
    def swim(self):
        print("Can swim")


class Duck(Flyer, Swimmer):
    pass


print("\n--- Multiple Inheritance ---")
duck = Duck()
duck.fly()
duck.swim()


# --- 3. Multilevel Inheritance ---
# A class inherits from a class which itself inherits from another class.
class Grandparent:
    def greet_grandparent(self):
        print("Hello from Grandparent")


class Parent(Grandparent):
    def greet_parent(self):
        print("Hello from Parent")


class Child(Parent):
    def greet_child(self):
        print("Hello from Child")


print("\n--- Multilevel Inheritance ---")
c = Child()
c.greet_grandparent()
c.greet_parent()
c.greet_child()


# --- 4. Hierarchical Inheritance ---
# Multiple child classes inherit from a single parent class.
class Shape:
    def info(self):
        print("I am a 2D shape.")


class Circle(Shape):
    def draw(self):
        print("Drawing a circle.")


class Square(Shape):
    def draw(self):
        print("Drawing a square.")


print("\n--- Hierarchical Inheritance ---")
circle = Circle()
circle.info()
circle.draw()

square = Square()
square.info()
square.draw()
