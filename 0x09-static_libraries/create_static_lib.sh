#!/bin/bash 

# collecting all .c files in the current directory
SOURCES = $(ls *.c)

#compile each of the source files found in object files
for SOURCE in SOURCES
do
	out = "${SOURCE%.c}.o"
	gcc -c $SOURCE -o $out
done

#create the static library from the objects files above
ar rc liball.a *.o

#then we can index each object file received 
ranlib liball.a 
#the only remaining step is that of using the library in a program 

#clean up the objects files if you want 
#here is the command - rm *.o
