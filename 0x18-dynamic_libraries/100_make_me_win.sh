#!/bin/bash
wget -P /tmp/ https://raw.github.com/goldeno10/holbertonschool-low_level_programming/master/0x18-dynamic_libraries/nrandom.so
export LD_PRELOAD=/tmp/winnum.so
