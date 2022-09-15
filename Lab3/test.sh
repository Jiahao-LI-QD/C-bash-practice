#!/bin/bash

    #for i in $*; do echo $i; done
a="1234567890"   

echo ${a#12}      
echo ${a#45}       

echo ${a#*45}        
echo ${a%45*}