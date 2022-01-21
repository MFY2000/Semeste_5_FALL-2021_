#! /bin/sh/

echo "Enter your salary: "
read salary
echo "Enter your year of service: "
read year

if [ $year -gt 5 ]
then
  echo "Employee will get (`expr $salary \* 5`)"
else
  echo "no bounces"
if