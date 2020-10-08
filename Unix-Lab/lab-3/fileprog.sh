#!/bin/sh
#Write a Shell program to accept two parameters perform File Test and display their attributes with suitable message if not display a suitable  message to pass right number of arguments

echo "Program: $0"
echo "The number of arguments specified is $#"
echo "The arguments specified are $*"
if test $# -eq 2
	then
		if test -f $1
		then
			echo "The attributes of first file are: "
			ls -l $1
		else
			echo "$1 is not a file name"
		fi
		if test -f $2
		then
			echo "The attributes of second file are: "
			ls -l $2
		else
			echo  "$2 is not a file name"
		fi
else
	echo "Please provide enter two arguments">/dev/tty
fi
	

