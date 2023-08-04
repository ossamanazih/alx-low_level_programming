#!/bin/bash

# Collect all .c files in the current directory
c_files=$(ls *.c 2>/dev/null)

# Check if there are any .c files
if [ -z "$c_files" ]; then
  echo "No .c files found in the current directory."
  exit 1
fi

# Compile .c files into .o files
gcc -c $c_files

# Create the static library liball.a from the generated .o files
ar rcs liball.a *.o

# Cleanup: Remove the temporary .o files
rm -f *.o

echo "Static library liball.a created successfully."
