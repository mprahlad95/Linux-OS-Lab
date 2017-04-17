#Write a shell script that takes input as seconds and converts it into hh:mm:ss format.

echo "Enter number of seconds:"; read sec

let hrs=$sec/3600
let sec=$sec-hrs\*3600
let min=$sec/60
let sec=$sec-min\*60

echo "$hrs:$min:$sec"

