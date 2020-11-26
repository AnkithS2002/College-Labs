#i) Write a Shell Script to concatenate the n1-n5 lines of File1 and n8-n15 Lines of File2 to file3
#using proper filter command of head and tail.

#! /bin/sh

head -n 5 File1.txt > File3.txt | tail -n 7 File2.txt >> File3.txt && echo "Completed"
