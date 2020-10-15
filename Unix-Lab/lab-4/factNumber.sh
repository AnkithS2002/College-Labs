#! /bin/sh
#1.Shell script to  find the FACTORIAL OF A NUMBER using Looping construct
echo "enter a number: "
read num
factorial=1
while [ $num -gt 0 ] #while counter > 0
do
   factorial=$(( $factorial * $num ))
   num=$(( $num - 1 ))
done
echo "Factorial is : $factorial"
