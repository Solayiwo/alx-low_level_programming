#!/bin/bash

gcc -Wall -Wextra -Werror -pedantic -c -fpic *.c
gcc -shared -o liball.so *.o
eport LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
