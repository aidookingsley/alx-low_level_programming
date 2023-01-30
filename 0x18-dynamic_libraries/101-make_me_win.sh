#!/bin/bash
wget -p /tmp/ https://raw.githubusercontent.com/aidookingsley/alx-low_level_programming/main/0x18-dynamic_libraries/nrandom.so
export LD_PRELOAD=/tmp/nrandom.so
