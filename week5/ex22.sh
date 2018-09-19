i=1000
while [ $i -gt 0 ]
do
	lockfile out.txt.lock
	last=`tail -n 1 out.txt`
	last=$((last + 1))
	echo "$last" >> out.txt
	rm -f out.txt.lock
	i=$((i - 1))
done
