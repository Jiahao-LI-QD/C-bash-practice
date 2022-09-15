#!/bin/bash

x=5

export x

echo from script sh5.sh x=$x

sh4.sh

echo from script sh5.sh after returning from sh6.sh