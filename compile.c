#!/bin/bash

if [ $# -ne 1 ]; then
    echo "Usage: $0 <C_file_name>"
    exit 1
fi

c_file="$1"
executable_name="${c_file%.c}"

if [ ! -f "$c_file" ]; then
    echo "Error: File '$c_file' not found."
    exit 1
fi

gcc -o "$executable_name" "$c_file"

if [ $? -eq 0 ];  then
    echo "Compilation successful. Executable '$executable_name' created."
else
    echo "Compilation failed."
fi

