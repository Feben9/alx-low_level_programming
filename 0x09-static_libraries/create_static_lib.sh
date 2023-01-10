#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c -o *.o
ar -rc liball.a *.o
ranlib liball.a
