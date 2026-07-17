#Print all multiples of 8 less than 100.

i=8

while (( i <= 100 ))
do
    echo "$i"
    (( i += 8 ))
done