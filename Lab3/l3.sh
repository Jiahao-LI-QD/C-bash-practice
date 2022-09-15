#!/bin/bash
#File:l3.sh
IFS=$'\t'
if [ ! -e names.txt -o ! -e courses.txt ]; then 
    echo 'One or both files do not existing'
    exit

else 
    
    if [ "$1" == "-count" ]; then
        if [ -e names.txt ]; then
        echo `wc -l < names.txt`
        exit
        else
            echo No such file 
        fi
    elif [ "$1" == "-f" ]; then
    shift
        count=0
        while read name ID1
        do
        in=$1
        
            for i in $*
            do 
                if [ $i != $1 ]
                then
                in="$in $i"
                fi
            done

            if [ $name == $in ] 
            then
            count=1
            while read ID2 course grade
            do
                if [ $ID2 == $ID1 ]
                then
                    if [ s$grade == s ]
                    then
                        echo $course in progress
                    else
                        echo $course $grade
                    fi
                fi
            done <courses.txt
            fi
        done <names.txt
        if [ $count -eq 0 ]
        then 
            echo No such student: $in
        fi
    elif [ "$1" == '-g' ];
    then
        count=0
        shift
        
        while read name ID1
        do
        in=$1
        
            for i in $*
            do 
                if [ $i != $1 ]
                then
                in="$in $i"
                fi
            done
            if [ $name == $in ] 
            then
            while read ID2 course grade
            do
                if [ $ID2 == $ID1 ]
                then
                    if [ ! -z $grade ]
                    then
                        echo $course $grade
                        ((count++))
                    fi
                fi
            done <courses.txt
            fi
        done <names.txt
        if [ $count -eq 0 ]
        then 
            echo No such student: $in
        fi
        
    elif [ "$1" == "-c" ]; then
    shift
    count=0
        while read ID course grade
        do
            if [ $course == $1 ]; then
                ((count++))
            fi
        done <courses.txt
    echo $count
    
    elif [ "$1" == "-list" ]; then
    shift   
    count=0
        while read ID course grade
        do
            if [ "$course" == "$1" -a "$grade" == "$2" ]; then
                ((count++))
            fi
        done <courses.txt
        echo $count
    fi
fi