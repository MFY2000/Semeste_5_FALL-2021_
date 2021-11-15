#!/bin/bash

echo "========= Untill ========="
echo "====== Factorial program ======"

echo "Enter Number (factorial): "
read i

answer=$i
ansToPrint="$i"

until[$i -ge 2]
do
  i=`expr $i - 1` 
  ansToPrint=" x $i" 
  answer=`expr $answer \* $i` 
done

echo "$ansToPrint = $answer"