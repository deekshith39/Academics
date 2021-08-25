echo " Arthmetic opertions \n"
echo "1.ADDITION\n2.SUBTRACTION\n3.MULTIPLICATION\n4.DIVISION"
echo "Enter the choice : "
read choice
echo "Enter the two numbers : "
read a
read b

echo -n "Result : "
case "$choice" in 
	1)echo `expr $a + $b` ;;
	2)echo `expr $a - $b` ;;
	3)echo `expr $a \* $b` ;;
	4)echo `echo "scale=2; $a / $b" | bc` ;;
	*)echo "Invalid choice"
esac
