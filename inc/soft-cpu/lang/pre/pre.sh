#!/bin/bash

cd instruction/
./flags_to_pre.sh
./s_to_pre.sh
cd ../

cd register/
./flags_to_pre.sh
./s_to_pre.sh
cd ../

#./to_pre.sh ../dsl/stack
#./to_pre.sh ../dsl/ram

