#!/bin/bash
# what does -g do?
# what does -fPIC do?
# shared libraries have the lib prefix
# .so is shared object
gcc -g -fPIC -Wall -Werror -Wextra -pedantic *.c -shared -o libholberton.so
