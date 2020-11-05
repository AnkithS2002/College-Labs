#Write a Shell Script to perform these Two Functions
#i)Arithmetic Operations on a set of two numbers using case expression 

#! /bin/sh

echo "enter the two numbers"
read a
read b
echo "enter 1 for addition; 2 for subtraction; 3 for multiplication; 4 for division; 5 for remainder"
read choice
case "$choice" in
"1" ) add=`echo $a \+ $b|bc`
	echo "Sum of $a and $b = $add"
;;
"2" ) sub=`echo $a \- $b|bc`
	echo "Difference of $a and $b = $sub"
;;
"3" ) mul=`echo $a \* $b|bc`
	echo "Product of $a and $b = $mul"
;;
"4" ) div=`echo $a \/ $b|bc`
	echo "Division of $a and $b = $div"
;;
"5" ) rem=`echo $a \% $b|bc`
	echo "Remainder after dividing $a and $b = $rem"
;;
esac


