#!/bin/bash

file_path=../../dsl/instruction/flags

file_name="${file_path##*/}"
pre_file=$file_name.pre

echo > $pre_file

OLD_IFS=$IFS
IFS=$'\n'    

for flag in `cat $file_path | remove_comments \#`
do
    printf "DEF_FLAG( $flag )\n" >> $pre_file
done
    
IFS=$OLD_IFS

