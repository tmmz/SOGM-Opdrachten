#! /bin/bash

# wav naar mp3 converter


if [ $# -lt 2 ]; then
echo "input must be: Filename en Filetype"



else

	echo "goedzo"

fi

	for(( i=0; i<1; i++ ))

do
filename=$1
echo "filenaam:" `basename $filename`
filetype=$2
echo "filetype:" $filetype
dir=$(dirname "$filename")
echo "dir:" $dir

name=`basename $filename $filetype` 
echo $name
 `lame -q0 $filename $name".mp3"`

done