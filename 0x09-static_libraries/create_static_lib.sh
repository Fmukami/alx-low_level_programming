#!/bin/bash

# Compile all .c files in the current directory and create corresponding .o files
gcc -c *.c

# Create a static library named liball.a from all the .o files
ar rc liball.a *.o

# Index the static library for quicker linking
ranlib liball.a

# Clean up by removing the .o files
rm *.o

