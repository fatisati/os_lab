#!/bin/bash
function CountEx()
{
    count=0
    for file in `ls $1`
    do
        #echo "file is $file"
        if [ -x $file ]
        then
            count=`expr $count + 1`
        fi
    done
    echo "The number of executable files in this dir is: $count"
}
while getopts x:d:c:h opt
do
    case $opt in
        x)CountEx $OPTARG;;
        d)CountDir $OPTARG;;
        c)Comp $OPTARG;;
        h)help;;
        *)echo "Please Use The -h Option to see help"
        break;;
    esac
done