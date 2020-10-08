#! /bin/sh
echo "enter the two numbers"
read a
read b
add=`echo $a \+ $b|bc`
echo "Sum of $a and $b = $add"
sub=`echo $a \- $b|bc`
echo "Difference of $a and $b = $sub"
mul=`echo $a \* $b|bc`
echo "Product of $a and $b = $mul"
div=`echo $a \/ $b|bc`
echo "Division of $a and $b = $div"
rem=`echo $a \% $b|bc`
echo "Remainder after dividing $a and $b = $rem"


