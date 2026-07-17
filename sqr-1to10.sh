#Print squares of numbers from 1 to 10.
i=1
while (( i <=10 ))
do
    echo "Squares of $i : $((i*i)) "
    (( i+=1 ))
done
