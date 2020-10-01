#! /bin/sh

#shell program to accept a filename from the user and display its attributes, contents and word count.
echo "enter the file name:"
read filename
echo "The attributes of the file $filename is:"
ls -l $filename
echo "The contents of the file $filename is:"
cat $filename
echo "The word count is:"
wc -w $filename
