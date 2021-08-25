echo "enter the values of 2 operands"
read a
read b
echo "Addition `expr $a + $b`"
expr $a + $b
echo "subtraction"
expr $a - $b
expr "multiplication"
expr $a \* $b
echo "division"
expr $a / $b
echo "remainder"
expr $a % $b
