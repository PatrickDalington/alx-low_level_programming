#!/bin/bash
-Wall -Werror -Wextra -pedantic -std=gnu89
gcc -c -fpic -o libdynamic.o *.c
gcc -shared -o libdynamic.so libdynamic.o
echo
