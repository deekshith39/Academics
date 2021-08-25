echo -n "Enter the upper limit : "
read N

num=$N

sum=0

while [ $N -gt 0 ]
do
   sum=$(echo $sum + $N | bc)
   N=$(echo $N - 1 | bc)
done

echo The Sum of $num Numbers : $sum
