#!/bin/bash
gcc -c *.c
ar cr libmy.a *.o
ranlib libmy.a
