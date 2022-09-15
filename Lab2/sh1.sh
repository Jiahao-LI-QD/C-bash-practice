#!/bin/bash
#File: sh1.sh

if [ ! $# -eq 2 ]
  then 
      echo usage: script_name dir file
else
  if [ ! -d $1 -o -d $2 ]
  then 
    if [ ! -d $1 ]
    then 
      echo $1 is not a directory
    fi

    if [ ! -f $1/$2 ]
    then 
      echo $2 is not a regular file
    fi
  elif [ -e $1/$2 ]
  then 
      echo file $2 is in directory $1

  else 
      echo file $2 is not in directory $1
  fi
fi