echo "Enter a:"
read a
echo "Enter b:"
read b
echo "Enter c:"
read c

if [ $a -gt $b ];then
 echo "$a is greater than $b."
elif [ $a -lt $b ];then
 echo "$a is lesser than $b."
elif [ $a -eq $b ];then
 echo "$a is equal to $b."
fi

if [ $a -gt $b -a $a -lt $b ];then
 echo "$a -gt $b -a $a -lt $b is true."
else
 echo "$a -gt $b -a $a -lt $b cannot be true."
fi

if [ $a -gt $b -o $a -lt $b ];then
 echo "Either of $a -gt $b and $a -lt $b is true."
else
 echo "Neither of $a -gt $b and $a -lt $b is true."
fi

