echo "Enter a:"
read a
echo "Enter b:"
read b
c=`echo $a + $b | bc -l`
d=`echo $a - $b |bc -l`
e=`echo $a \* $b|bc -l`
f=`echo $a / $b|bc -l`
echo “$a+$b=$c”
echo “$a-$b=$d”
echo “$a*$b=$e”
echo “$a/$b=$f”
