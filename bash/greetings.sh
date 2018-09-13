#!/bin/bash
clear
echo Welcome to my [] experimental program!
echo
echo -n "Hello what is your first name? "
read firstname
echo -n "Thank you $firstname, what is your last name? "
read lastname
echo "Nice to meet you $fistname $lastname"
echo
if ["$fistname" == "Kyle"] && ["$lastname" == "Dixon"]
then echo "HECK YES! ITS KYLE FREAKING DIXON!"
else echo "OK $firstname $lastname is now using my program"
fi
