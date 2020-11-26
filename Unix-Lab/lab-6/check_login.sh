#ii)Write a Shell Script that accepts valid login names as arguments and print their corresponding home directories using grep command (use  /etc/passwd to search #Login name).

#! /bin/sh

for nam in $*
	do
		y=`grep "$nam" /etc/passwd | cut -d ":" -f1`
		if [ -n $y ]
			then
				if [ "$y" = "$nam" ]
					then
						x=` grep "$nam" /etc/passwd | cut -d ":" -f6`
						echo "home directory of $nam is $x"
				else
					echo "$nam doesn't have an account "
				fi
		fi
done
