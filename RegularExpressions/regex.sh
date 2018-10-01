#!/bin/bash
clear
echo Enter your Social Security:
read $ss

if [[ "$ss" == "^\d{3}-\d{2}-\d{4}$" ]]
then
    echo "valid"
else
    echo "invalid"
fi
