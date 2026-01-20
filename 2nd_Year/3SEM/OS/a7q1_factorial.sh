#!/bin/bash

# Program: Find Factorial
# Description: A shell script to find the factorial of a number
# Date: 09 Nov, 2025

# Author: Biranchi Kulesika
echo "Factorial of a number"
read -p "Enter a number: " num

fact=1
temp=$num

while (( $temp != 0 ))
do
    (( fact *= temp ))
    (( temp -= 1 ))
done

echo "The factorial of $num = $fact"