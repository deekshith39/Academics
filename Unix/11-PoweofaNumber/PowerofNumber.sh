echo "Enter the value of X and N (X^N) : "
read X
read N

res=1

while [ $N -gt 0 ]
do
   res=$(echo $res \* $X | bc)
   N=$(echo $N -1 | bc)
done

echo Result = $res
