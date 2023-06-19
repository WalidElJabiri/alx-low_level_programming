#!/bin/bash
gcc -Wall -Wextra -pedantic -Werror -c -fPIC *.c
gcc -shared -o liball.so *.o
export LD_LINRARY_PATH=.:$LD_LIBRARY_PATH
