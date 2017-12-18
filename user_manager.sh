#!/bin/bash

if [ "$1" = "delete" ]
then
    deluser $2
else
    adduser $2
    #passwd $3
fi