echo "Enter string 1:"
read str1
echo "Enter string 2:"
read str2

if [ “$str1” = “$str2” ];then
	echo “Strings are equal”
fi

if [ “$str1” != “$str2” ];then
	echo “Strings are not equal”
fi

if [ -n “$str1” ];then
	echo “Length of str1 is greater then 0”
fi

if [ -z “$str1” ];then
	echo “Length of str1 is equal to 0”
fi
