#Write a shell script to check whether a number is prime or not

echo "Enter a number - "; read num
							#sqrt=$(echo "$num/2"|bc) 				#echo $sqrt  scale=0;sqrt($num)

flag=1
for((i=2;i<num/2;i++))
do
							#rem=$(echo "$num % i"|bc -l); echo $rem
	if((num%i == 0));then
		flag=0
	else
		flag=1
		break
	fi
done

if(($num == 0 || $num == 1));then
	echo "$num is neither Prime nor Composite"
elif(($flag == 1));then
	echo "$num is Prime"
else
	echo "$num is Composite"
fi
