#!/bin/bash
# My first script

# T=`xdg-mime query filetype $1`
# echo "opening file "  $1  " of type " $T "with " `xdg-mime query default $T`
# sed '/dd/d' hello.txt
sed -i '/^\(.\{5\}\)dd/d' hello.txt
echo "finished script"