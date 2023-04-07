#!/bin/bash
gcc -c -v *.c && ar rcs liball.a *.o
