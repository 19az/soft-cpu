#!/bin/bash

g++ -I../../../../ -I../../ unit_test/ut.cpp asm.cpp -o ut
./ut
rm ut

