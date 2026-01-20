#!/bin/bash

# Program: Multiplication Table
# Description: A shell script to print the multiplication table of a number
# Date: 05 Dec, 2025

# Author: Biranchi Kulesika

echo "Multiplication Table"
read -p "Enter a number: " num

for ((i=1; i<=10; i++))
do
    echo "$num * $i = $((num*i))"
done