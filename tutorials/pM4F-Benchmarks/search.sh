#!/bin/bash

# Define the constant folder name
FOLDER_NAME="constant"

# Use find command to search for folders with the constant name
# Then, loop through each found folder, print the folder name, and the content of files named "transportProperties"
find . -type d -name "$FOLDER_NAME" -exec sh -c 'echo "Folder: {}" && cat "{}/transportProperties"' \;


