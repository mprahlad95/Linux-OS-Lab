#String operations

echo "Enter a string:"
read str

len=`echo $str | wc -c`
let len=len-1
echo "Number of characters in '$str' is $len"

char=`echo $str | cut -c2`	#cuts second character from the string
echo "Second character in '$str' is $char"

str2=""
for((i=$len;i>0;i--))
do
 char=`echo $str | cut -c$i`
 str2=$str2$char
done

echo "Reverse of '$str' is '$str2'"
