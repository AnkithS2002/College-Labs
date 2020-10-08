#!/bin/sh
#Shell Program to find biggest of three numbers

echo "Enter 3 numbers:"
read n1
read n2
read n3
if [ $n1 -gt $n2 ] && [ $n1 -gt $n3 ]
	then
		echo "$n1 is the largest of three numbers"
elif [ $n2 -gt $n1 ] && [ $n2 -gt $n1 ]
	then 
		echo "$n2 is the largest of three numbers"
else
	echo "$n3 is the largest of three numbers"
fi
