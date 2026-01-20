#!/bin/bash

# Program: Compare and Delete Duplicate File
# Description: A shell script to compare two files and ask the user to delete the duplicate file.
# Date: 05 Nov, 2025

# Author: Biranchi Kulesika

echo "Compare Two Files"

read -p "Enter 1st file name: " file1
read -p "Enter 2nd file name: " file2

if [ ! -f "$file1" ] || [ ! -f "$file2" ]; then
    echo "Error: one or both files do not exist"
    exit 1
fi

if cmp -s "$file1" "$file2"; then
    echo "Duplicate found! Second file is: $file2 "
    
    read -p "Do you want to delete the second file? (y/n): " choice
    
    if [[ "$choice" == "y" || "$choice" == "Y" || "$choice" == "yes" || "$choice" == "YES" ]];
    then
        rm "$file2"
        echo "$file2 deleted successfully"
    else
        echo "Deletion cancelled"
    fi
else
    echo "Files are different"
fi