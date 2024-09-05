#!/usr/bin/env bash

bundled="all.tree"
forest=$(find trees/ -name '*.tree' -not -path 'trees/index.tree')

echo '\title{all the syntax}' > $bundled
echo -e "\n" >> $bundled

for tree in $forest; do
    echo '\subtree{' >> $bundled
    cat $tree >> $bundled
    echo -e "}\n" >> $bundled
done
