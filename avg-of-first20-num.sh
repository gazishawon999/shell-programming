#Find the average of the first 20 natural numbers.

i=1
sum=0

while (( i<=20 ))
do
    ((sum+=i))
    (( i+=1 ))
done

avg=$(( sum/20 ))

echo "The average of first 20 numbers is : $avg"