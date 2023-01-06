#!/bin/bash
gcc -Wall -pedantic -werror -wextra -c *.c
ar rc libali.a *.o
