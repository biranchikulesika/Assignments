#!/bin/bash

# Program: Compare and Delete Duplicate File
# Description: A shell script to find the sum of digits of a number
# Date: 07 Nov, 2025

# Author: Biranchi Kulesika

echo "Sum of Digits"
read -p "Enter a number: " num

sum=0
temp=$num

while (( temp != 0 ))
do
    (( sum += temp % 10 ))
    (( temp /= 10 ))
done

echo "The sum of digits in $num = $sum"