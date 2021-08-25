echo -n "Enter the value of N : "
read N

i=2
sum=0

while [ $i -lt $N ]
do
   sum=$(echo $sum+$i | bc)
   i=$(echo $i+2 | bc)
done

echo The Sum is : $sum
