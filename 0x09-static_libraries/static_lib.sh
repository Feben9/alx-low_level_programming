#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c -o *.o
ar rc libmy.a *.o
ranlib libmy.a
