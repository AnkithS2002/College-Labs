#Write a Shell Script to find Fibonacci Series Upto N using While Construct

#! /bin/sh

echo "Enter the value of N : \c"
read n

fib0=0
fib1=1
count=0
sum=0
if [ $n -eq 1 ]
then
	echo $fib0
elif [ $n -eq 2 ]
then
	echo "$fib0 $fib1"
else
	echo "$fib0 $fib1 \c"
	count=2
	while [ $count -ne $n ]
	do
		sum=`expr $fib0 + $fib1`
		echo "$sum \c"
		fib0=$fib1
		fib1=$sum
		count=`expr $count + 1`
	done
	echo
fi
