#!/bin/bash

# Check if mkdirs binary exists in the current directory
if [ ! -f ./mkdirs ]; then
    echo "mkdirs binary not found in the current directory."
    exit 1
fi

# Copy the mkdirs binary to /usr/local/bin
sudo cp ./mkdirs /usr/local/bin/

# Ensure /usr/local/bin is in the PATH
if [[ ":$PATH:" != *":/usr/local/bin:"* ]]; then
    echo "export PATH=\$PATH:/usr/local/bin" >> ~/.bashrc
    export PATH=$PATH:/usr/local/bin
fi

echo "mkdirs has been installed and added to your PATH."

# Reload the shell configuration
source ~/.bashrc

echo "You can now use 'mkdirs' from anywhere in your terminal."
