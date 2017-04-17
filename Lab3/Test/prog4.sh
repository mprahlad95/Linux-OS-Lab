i=0
echo -e “while loop - executes IF condition is TRUE”
while((i<5))
do
	echo $i
	((i++))
done

i=0
echo -e “until loop - executes IF condition is FALSE”
until((i>5))
do
	echo “$i”
	((i++))
done
