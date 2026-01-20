#!/bin/bash

# Program: Check Prime Number
# Description: A shell script to check if a number is prime or not.
# Date: 28 Nov, 2025

# Author: Biranchi Kulesika

read -p "Enter a number: " num

if ((num == 1)); then
    echo "Not a prime number"
    exit 0
fi

for (( i=2; i<=num/2; i++ ))
do
    if (( num % i == 0 )); then
        echo "Not a prime number"
        exit 0
    fi
done

echo "Prime number"