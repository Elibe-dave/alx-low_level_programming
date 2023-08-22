#!/bin/bash
# Compile all .c files into object files
gcc -c -fPIC *.c
# Create the shared library by linking object files
gcc -shared -o liball.so *.o
# Clean up by removing object files
rm *.o
