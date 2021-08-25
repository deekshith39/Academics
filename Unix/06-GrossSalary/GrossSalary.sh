echo -n "Enter the basic salary : "
read salary

echo "Gross Salary : `echo "$salary*0.40+$salary*0.20" | bc -l`"


