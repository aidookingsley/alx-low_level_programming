#!/bin/bash
wget -p /tmp/ https://raw.github.com/aidookingsley/alx-low_level_programming/blob/main/0x18-dynamic_libraries/nrandom.so
export LD_PRELOAD=/tmp/nrandom.so
