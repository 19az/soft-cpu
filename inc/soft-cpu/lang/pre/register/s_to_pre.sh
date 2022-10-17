#!/bin/bash

dir_path=../../dsl/register/s

dir_name="${dir_path##*/}"
pre_file=$dir_name.pre

echo > $pre_file

for file in $dir_path/*
do
    OLD_IFS=$IFS
    IFS=$'\n'    

    for reg in `cat $file | remove_comments \#`
    do
        reg_size="${file##*/}"
        printf "DEF_$reg_size( $reg )\n" >> $pre_file
    done
    
    IFS=$OLD_IFS
done

