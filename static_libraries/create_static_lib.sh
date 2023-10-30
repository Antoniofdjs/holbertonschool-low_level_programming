#!/bin/bash

CC=gcc

# Compile each .c file to .o with the same name
for file in *.c; do
    if [ -f "$file" ]; then

        filename=$(basename -- "$file")
        filename_noext="${filename%.c}"
        object_file="$filename_noext.o"

        # Compile the source file to an object file
        $CC -c "$file" -o "$object_file"
    fi
done

# Create a static library from all the .o files
ar rcs liball.a *.o

# Clean up the .o files
rm -f *.o

