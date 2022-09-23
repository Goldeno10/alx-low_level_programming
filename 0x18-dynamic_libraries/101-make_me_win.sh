#!/bin/bash
wget -P /tmp/ https://raw.github.com/Goldeno10/alx-low_level_programming/master/0x18-dynamic_libraries/winnum.so
export LD_PRELOAD=/tmp/winnum.so
