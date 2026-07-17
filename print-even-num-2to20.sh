#Print even numbers from 2 to 20 using a for loop.

for (( i=2; i<=20; i+=1 ))
do
    if (( i % 2==0 ))
    then
        echo "$i"
    fi
done