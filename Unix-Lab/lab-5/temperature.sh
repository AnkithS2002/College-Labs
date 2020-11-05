#Write a Shell Script to convert the Temperatures FAHERENHEIT to celsius (f -32) *5 /9 

#!/bin/sh

echo "Enter the temperature in °F :\c"
read tf

tc=`echo "($tf- 32) * 5/9" | bc`

echo "Temperature in °C is : $tc"
