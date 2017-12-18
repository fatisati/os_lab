#!/bin/bash
if ! grep 'PATH=.*HOME/bin' ~/.profile
then
    echo 'export PATH="$HOME/bin:$PATH"' >> ~/.profile
fi
. ~/.profile
echo "$PATH"      # you should see your bin directory
cd /tmp           # change to another random directory
type 5.sh  # see if the shell finds your scripts