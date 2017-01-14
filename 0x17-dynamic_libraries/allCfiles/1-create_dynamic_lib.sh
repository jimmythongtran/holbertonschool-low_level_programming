#!/bin/bash
gcc -g -c -fPIC *.c
gcc -shared -g -o liball.so *.o
