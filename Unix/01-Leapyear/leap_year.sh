echo "enter the year"
read yr
a=`expr $yr % 4`
b=`expr $yr % 100`
c=`expr $yr % 400`
if [ $a -eq 0 -a $b -ne 0 -o $c -eq 0 ]
then 
echo "leap year"
else
echo "not a leap year"

fi

