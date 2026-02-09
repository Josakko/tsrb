#!/bin/bash

declare -i n=30

for ((i = 1; i <= n; i++)); do
    label="lv$i"
    if [ $i -lt 10 ]; then
        label="lv0$i"
    fi

    # echo "$label"
    mkdir "$label"
done
