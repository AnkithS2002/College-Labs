#! /bin/sh
#Write an Interactive Shell program to check whether a  number is zero,positive or Negative
echo "enter a number: "
read a
if [ $a -gt 0 ]
	then
		echo "$a is positive"
elif [ $a -lt 0 ] 
	then
		echo "$a is negative"
else
	echo "number is 0"
fi

