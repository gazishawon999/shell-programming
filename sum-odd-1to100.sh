#Find the sum of all odd numbers from 1 to 100 using a while loop.

i=1
sum=0

while (( i <= 100 ))
do
    ((sum += i))
    ((i += 2))
done

echo "Sum of ODD Numbers: $sum"
