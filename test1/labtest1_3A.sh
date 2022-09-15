#!/bin/bash
#File:labtest1_3A.sh


flag=0
while read s
do
    flag=0
    while read key int1 int2
    do
        if [ $key == $s ];then
            if [ $int1 -gt $int2 ];then
                echo $int1
                flag=1
            else
                echo $int2
                flag=1
            fi
        fi
    done <dat.txt

    if [ $flag -eq 0 ];then
        break
    fi
done