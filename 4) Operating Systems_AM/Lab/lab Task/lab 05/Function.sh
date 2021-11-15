
function tablePrint(){
  i=1
  until[$i -ge 10]
  do
    sum=`expr $i \* $n` 
    echo "$1 x $i = $sum" 
  done
}


function factorial(){
  i=$1   
  answer=$i
  ansToPrint="$i"

  until[$i -ge 2]
  do
    i=`expr $i - 1` 
    ansToPrint=" x $i" 
    answer=`expr $answer \* $i` 
  done

  echo "$ansToPrint = $answer"
}

function (){
  if [ $1 -ge 1 ]
  then
    echo "Odd"
  else
    echo "Even"

}