echo -n "Enter the name of the student : "
read name
echo -n "Enter the Subject 1 Marks : "
read m1
echo -n "Enter the Subject 2 Marks : "
read m2
echo -n "Enter the subject 3 Marks : "
read m3

sum1=$(echo $m1 + $m2 + $m3 | bc)
avg=$(echo $sum1 / 3 | bc)

echo "$name's Result : "

if [ $avg -gt 90 ]
then
echo "Distinction"
elif [ $avg -gt 70 ]
then
echo "First Class"
elif [ $avg -gt 50 ]
then
echo "Second Class"
else 
echo "Fail"
fi


