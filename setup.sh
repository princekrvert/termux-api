#!/usr/bin/bash 
#made by prince kumar 
# date 25 feb 2022
#first generate the binary code using c lang 
apt update && apt upgrade -y 
# now install the clang 
pkg isntall clang 
# now compile the api 
clang api.c -o api 
# move file to bin to use as the cmd 
mv api /usr/bin 
echo -e "\e[32;1m Read the github page to understand the cmd uses"
echo -e "\e[35;1m https://github.com/princekrvert/termux-api"

