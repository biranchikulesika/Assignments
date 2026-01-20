#!/bin/bash

# Program: Find The Greatest
# Description: A simple shell script to find the greater number among three numbers
# Date: 7 Nov, 2025

# Author: Biranchi Kulesika

echo "Find The Greatest Number"
read -p "Enter the 1st number: " num1
read -p "Enter the 2nd number: " num2
read -p "Enter the 3rd number: " num3

if ((num1 > num2)) && ((num1 > num3));then
    echo "The greatest number is $num1"

    elif ((num2 > num1)) && ((num2 > num3));then
    echo "The greatest number is $num2"
else
    echo "The greatest number is $num3"
fi