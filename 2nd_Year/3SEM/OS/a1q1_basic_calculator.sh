#!/bin/bash

# Program: Simple Calculator
# Description: A simple shell script to perform the task of a simple calculator such as addition, substraction, multiplication and division.
# Date: 7 Nov, 2025

# Author: Biranchi Kulesika


echo "Simple Calculator"
echo "-----------------"
echo "1. Addition"
echo "2. Substraction"
echo "3. Multiplication"
echo "4. Division"

read -p "Enter your choice (1-4): " choice
read -p "Enter the 1st number: " num1
read -p "Enter the 2nd number: " num2

case $choice in
    1)
        echo "$num1 + $num2 = $((num1+num2))"
    ;;
    2)
        echo "$num1 - $num2 = $((num1-num2))"
    ;;
    3)
        echo "$num1 * $num2 = $((num1*num2))"
    ;;
    4)
        if ((num2 == 0)) || ((num1 < num2)); then
            echo "Zero Division Error or Not Divisible"
            exit 1
        fi
        echo "$num1 / $num2 = $((num1/num2))"
    ;;
    *)
        echo "Invalid option selected"
    ;;
esac