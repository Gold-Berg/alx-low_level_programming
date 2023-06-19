#!/bin/bash

gcc -c -Wall -Werror -fpic *.c

gcc -shared -o liball.so *.o

rm *.o

echo "Dynamic library liball.so created successfully."

