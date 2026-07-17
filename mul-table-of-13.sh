#Print the multiplication table of 13 using a for loop.

echo "The Multipication of 13 is : "
for (( i=1; i <= 10; i+=1 ))
do
    mul=$(( 13*i ))
    echo " 13 * $i = $mul"
done