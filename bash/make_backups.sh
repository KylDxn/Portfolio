#!/bin/bash

clear
echo -e "\e[31;43mMaking a tar backup of my BASH directory, press [enter] to continue\e[0m"
read -p " "
echo
dayName=$(date +%A)
dayDate=$(date +%d)
month=$(date +%B)
year=$(date +%Y)

echo -e "\e[106mDayName: $dayName\e[0m"
echo -e "\e[106mDayDate: $dayDate\e[0m"
echo -e "\e[106mMonth: $month\e[0m"
echo -e "\e[106mYear: $year\e[0m"
echo
echo
cal
echo

echo -e "\e[31;43m***** Hostname Information *****\e[0m"
hostnamectl
echo " "

echo -e "\e[31;43m***** Filesystem disk space usage *****\e[0m"
df -h
echo " "

echo -e "\e[31;43m***** Memory -- free and used *****\e[0m"
free -h
echo " "

echo -e "\e[31;43m***** System Uptime and Performance Load *****\e[0m"
uptime 
echo " "

echo -e "\e[31;43m***** Users Logged In *****\e[0m"
who
echo " "

echo -e "\e[31;43m***** Top 5 Processes *****\e[0m"
ps -eo %mem,%cpu,comm --sort=-%mem | head -n 5
echo " "

dest=~/backups
src=~/bash

if [ -d $dest ]; then
echo -e  "\e[31;43mBackup folder exists\e[0m"
else
echo -e  "\e[31;43mBackup folder doesnt exist, creating it now ...\e[0m"
mkdir -p $dest
echo
fi
read -p "Press any key to continue" -n1 -s
mkdir -p $dest/"$dayName $dayDate $month $year"
echo
echo -e "\e[31;43mBackup started ...\e[0m"
tar cvfz $dest/"$dayName $dayDate $month $year" /bash_backup.tgz $src
echo
echo -e "\e[31;43mAnd here is whats inside the directory:\e[0m"
cd "$dayName $dayDate $month $year"
ls -ahl
echo

echo -e "\e[31;43mAll done, press [enter] exit\e[0m"
read -p " "
cd ~
clear




