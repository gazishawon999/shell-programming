#!/bin/bash

echo "Enter a number:"
read n

fact=1

for (( i=1; i<=n; i++ ))
do
# fact=$((fact * i)) 
    (( fact *= i )) 
done
 
echo "Factorial of $n = $fact"