#------------------------------------------------------------------
echo "Enter a word - "
read word
#------------------------------------------------------------------
if [[ $word = [yY]* ]]
then
	echo "Word starts with a y or Y"
fi
#------------------------------------------------------------------
if [[ $word = [[aeiou][AEIOU]]* ]]
then
	echo "Word starts with a vowel"
fi
#------------------------------------------------------------------
if [[ $word = [0-9]* ]]
then
	echo "Word starts with a digit"
fi
#------------------------------------------------------------------
if [[ $word = [[a-zA-Z][a-zA-Z][a-zA-Z]]* ]]
then
	echo "First three characters are alphabets"
fi
#------------------------------------------------------------------
#if [ $word = [![a-z]]* ] or if [ $word = [^[a-z]]* ]
#then
#	echo “Word does not start with lower case letter”
#fi
#------------------------------------------------------------------
