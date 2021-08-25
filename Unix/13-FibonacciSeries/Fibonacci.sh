echo -n "Enter the number : "
read N

a=0 
 
b=1  

i=0
   
echo "The Fibonacci series is : "
   
while [ $i -le $N ]
do
    echo -n "$a "
    fn=$(echo $a + $b |bc)
    a=$b 
    b=$fn 
    i=$(echo $i + 1 | bc)
done
echo " "
