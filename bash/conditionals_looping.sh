#!/bin/bash
clear
for count in {0..10}; do 
echo The count = $count
let count=count+1
done

for count in {10..20}; do 
echo The count = $count
let count=count+1
done

for count in {0..100..2}; do 
echo The count = $count
let count=count+1
done

echo
echo

wCount=0
while [ $wCount -lt 10 ]; do
echo $wCount
let wCount=wCount+1
done

echo
echo



