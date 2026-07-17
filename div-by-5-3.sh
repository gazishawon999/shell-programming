# Print all numbers between 1 to 100 that are divisible by 3 and 5.

#!/bin/bash

i=1

while (( i <= 100 ))
do
    if (( i % 3 == 0 && i % 5 == 0 ))
    then
        echo "$i"
    fi

    ((i++))
done