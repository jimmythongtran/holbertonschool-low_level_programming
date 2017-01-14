#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -g -c -fPIC *.c
gcc -shared -g -o liball.so *.o
