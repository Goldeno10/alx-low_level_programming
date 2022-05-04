#!/bin/bash
gcc -c *.c
ar rc liball.a *.c
ranlib liball.a
