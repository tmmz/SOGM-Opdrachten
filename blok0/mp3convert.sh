#! /bin/bash

# wav naar mp3 converter


if [ $# -lt 2 ]; then
echo "input must be: Filename en Filetype"

else

filename=`basename $1 $2 ` 
echo $filename
 `lame -h $1 $filename".mp3"`

fi