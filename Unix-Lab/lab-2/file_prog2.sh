#! /bin/sh

#shell program to copy, rename operation by accepting two file names from user
echo "enter the file 1 name:"
read file1
echo "enter the file 2 name:"
read file2
cp $file1 $file2
echo "$file1 contents has been copied to $file2."
echo "enter what u want to rename $file1 as:"
read file3
mv -v $file1 $file3
