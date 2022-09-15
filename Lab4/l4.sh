#!/bin/bash
out="YES"
pre=
while read number
do
    if [ -z $number ]; then
        continue
    fi
    if [ -z $pre ]; then
        pre=$number
    elif [ $number -lt 0 ]; then
        break
    else
        ((answer=$number-$pre))
        if [ ! $answer -eq 1 ]; then
            out="NO"
        else
            pre=$number
        fi
    fi
done
echo $out