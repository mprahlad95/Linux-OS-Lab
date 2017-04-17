for((i=0;i<5;i++))
do
	echo $i
done

for i in “abc” “def” “xyz”
do
	echo $i
done

IFS=”/” #>>>>Internal Field Seperator<<<<
read x	#abc/def/ghi/klm :value for variable x

for i in $x
do
	echo $i
done
