#!/usr/bin/env bash

gen_tests() {
    local forest_path=$1
    local generated=$2

    : > $generated

    forest=$(find $forest_path -name '*.tree' -not -path '*/index.tree')
    for tree in $forest; do
        echo "==================" >> $generated
        echo $(basename $tree) >> $generated
        echo "==================" >> $generated
        echo "" >> $generated

        cat $tree >> $generated

        echo "" >> $generated
        echo "------------------" >> $generated
        echo "" >> $generated

        tree-sitter test --update --include $(basename $tree) || exit 1
    done
}

forest_path="test/real-trees/golden-forest/trees"
generated="test/corpus/all-the-syntax.txt"
gen_tests $forest_path $generated

forest_path="test/real-trees/jms-trees"
generated="test/corpus/jms-trees.txt"
gen_tests $forest_path $generated
