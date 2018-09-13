#!/bin/bash
clear
echo Hello, welcome to my BASH updater script! what is your first name?
read firstname
echo It\'s nice to meet you $firstname, what is your last name?
read lastname
echo Thank you $firstname $lastname! Would you like to update? [Y/N]
read response
if [ $response == 'Y' ]
then sudo apt update
else echo I wont update
fi
echo Would you like to Upgrade? [Y/N]
read response3
if [ $response3 == 'Y' ]
then sudo apt upgrade
else echo I wont upgrade
fi
echo Would you like to Autoclean? [Y/N]
read response2
if [ $response2 == 'Y' ]
then sudo apt autoclean
else echo I wont autoclean
fi
echo Would you like to Autoremove? [Y/N]
read response4
if [ $response4 == 'Y' ]
then sudo apt autoremove
else echo I wont autoremove
fi


