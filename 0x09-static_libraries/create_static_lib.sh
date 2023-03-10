#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -c *.c
arr -rc liball.a *.o
ranlib liball.a
