#!/bin/bash

MAX_N_ARGS=4

dir_path=../../dsl/instruction/s

dir_name="${dir_path##*/}"
pre_file=$dir_name.pre

echo > $pre_file

for file_path in $dir_path/*
do
    n_args=0
    for i in $(seq 1 $MAX_N_ARGS)
    do
        if [[ `cat $file_path` == *"ARG$i"* ]]; then
            n_args=$i
        fi
    done

    file_name="${file_path##*/}"

    printf "DEF_INSTR( $file_name, $n_args, \n\n" >> $pre_file

    printf "\t{\n" >> $pre_file

    OLD_IFS=$IFS
    IFS=$'\n'

    for line in `cat $file_path | remove_comments \#`
    do
        printf "\t$line;\n" >> $pre_file
    done

    IFS=$OLD_IFS

    printf "\t}\n)\n" >> $pre_file
done

