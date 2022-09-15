#!/bin/bash
#File: Dio.sh
count=0
if [ ! $# -eq 4 ]
then 
    echo the number of arguments should be 4

else
for (( x=1; x<=$1; x++))
do 
  for (( y=$x; y<=$2; y++))
  do 
    for (( z=1; z<=$3; z++))
    do
      for (( w=$z; w<=$4; w++))
      do
      first=$(($x * $x * $x + $y * $y * $y))
      second=$(($z * $z * $z + $w * $w * $w))
        if [ $first -eq $second ]
          then 
            echo x= $x, y= $y, z= $z, w= $w
            ((count++))
        fi
      done
    done
  done
done

if [ $count -eq 0 ]
        then 
            echo No solution
fi
fi