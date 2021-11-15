
#!/bin/bash

echo "========= Untill ========="
i=1
echo "====== Forward Loop ======"

until[$i -ge 100]
do
  echo "$nmuber"
  i=`expr $i + 1`
done

echo "====== Backword Loop ======"

until[$i -le 0]
do
  echo "$nmuber"
  i=`expr $i - 1`
done
