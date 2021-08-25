echo -n "enter the temperature in Fahreneit : "
read temp

a=$(echo $temp - 32 | bc)
b=$(echo "scale=2;" 5 / 9 | bc)
c=$(echo "scale=2;" $a \* $b | bc)

echo The temperature in Celsius is $c

