#Write a shell script to generate the Fibonacci Series

let prev=0
let curr=1
for((i=0;i<20;i++))
do
	echo -e $prev
	let curr=$curr+$prev
	let prev=$curr-$prev
done

