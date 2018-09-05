#!/bin/bash
clear
echo Hello, welcome to my BASH updater script! what is your name?
read varname
echo It\'s nice to meet you $varname
sudo apt update
sudo apt upgrade -y
sudo apt autoclean
sudo apt autoremove


