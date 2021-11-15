#!/bin/bash

echo "========= Untill ========="
echo "====== Multiplication table. ======"

echo "Enter Number (multiplication): "
read n

i=1
until[$i -ge 10]
do
  sum=`expr $i \* $n` 
  echo "$n x $i = $sum" 
done
