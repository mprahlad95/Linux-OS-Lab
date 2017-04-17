#Write a shell script to analyze a file in the directory

echo "Enter Name of file:"
read a

f='/home/student3/Downloads/$a'

if [ -e $f ];then
 echo "File $f exists."
else
 echo "File $f does not exist."
fi

if [ -d $f ];then
 echo "File $f is a directory."
elif [ -f $f ];then
 echo "File $f is a regular file."
fi

