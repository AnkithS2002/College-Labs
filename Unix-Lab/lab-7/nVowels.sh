#Write a shell script to count the number of vowels in a file using tr command

#! /bin/sh

read -p "Enter file name: " fileName
echo "Number of vowels in $fileName :- "
cat $fileName | tr -dc "aeiouAEIOU" | wc -c
