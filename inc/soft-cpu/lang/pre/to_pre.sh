#!/bin/bash

file_path="$1"

file_name="${file_path##*/}"
pre_file=$file_name.pre

echo > $pre_file

OLD_IFS=$IFS
IFS=$'\n'

for line in `cat $file_path | remove_comments \#`
do
    IFS=$' '
    line=( $line )
    IFS=$'\n'

    printf "DEF_${line[0]}( ${line[1]} )" >> $pre_file
    printf "\n" >> $pre_file
done

IFS=$OLD_IFS

