#Find the sum of the first 10 natural numbers using a while loop.

i=1
sum=0

while (( i<=10))
do
    ((sum+=i))
    (( i++ ))
done

echo "The Sum of first 10 natural Numbers= $sum"

