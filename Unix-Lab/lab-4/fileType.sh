#! /bin/sh
#3.Write shell scripts accept a file as a command line argument and display whether it is ordinary file or directory file and display their attributes.

filename=$1

if [ $# -eq 1 ]
then 
	if [ -d "$filename" ]
	then
		echo "Given file is a directory"
		echo "Attributes are:"
		ls -l $filename
	elif [ -f "$filename" ]
	then
		echo "Given file is an ordinary file"
		echo "Attributes are:"
		ls -l $filename
	else
		echo "Not a valid filename"
	fi
else
	echo "The argument not given"
fi
