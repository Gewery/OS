i=10
while [ $i -gt 0 ]
do
	last=`tail -n 1 out.txt`
	last=$((last + 1))
	echo "$last" >> out.txt
	i=$((i - 1))
done
