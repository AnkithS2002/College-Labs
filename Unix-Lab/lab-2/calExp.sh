#! /bin/sh
echo "enter the two numbers"
read a
read b
add=`expr $a + $b`
echo "Sum of $a and $b = $add"
sub=`expr $a - $b`
echo "Difference of $a and $b = $sub"
mul=`expr $a \* $b`
echo "Product of $a and $b = $mul"
div=`expr $a / $b`
echo "Division of $a and $b = $div"
rem=`expr $a % $b`
echo "Remainder after dividing $a and $b = $rem"


