#!/bin/bash

clear
echo Welcome to my second BASH script 
name=$1 
period=$2
read -p "Hello there $name from period $period"
echo What is your name?
read name
echo 
read -p "Hello $name glad to work with you, today is $(date +%A %Y-%m-%d-%H:%m:%s). Press [enter] to continue"

$1

x=7
y=9

echo
echo x=$x, y=$y
