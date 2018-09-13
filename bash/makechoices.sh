#!/bin/bash

clear

choice=5
echo "1. update"
echo "2. upgrade"
echo "3. autoclean"
echo "4. autoremove"
echo "5. Exit"

while [ $choice -eq 5 ]; do

echo "Please enter in your selection 1-5"
read choice

if [ $choice -eq 1 ]; then
echo you want to do an update
#add code

else

	if [ $choice -eq 2 ]; then
	echo "you want to do an upgrade"
	#add code
	else
            if [$choice -eq 3]; then
            echo "You want to do an autoclean"
            #add code
            else
             
                    if [$choice -eq 4]; then
                    echo "You want to do an autoremove"
                    #add code
                    else
                    
                            if [$choice -eq 5]; then
                            echo "Goodbye!"
                            echo "Sorry, I dont understand what you want me to do - please try again"
                                    fi
                            fi
                    fi
            fi  
fi
done
