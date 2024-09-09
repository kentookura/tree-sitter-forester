#!/usr/bin/env bash

set -e

TREES_DIR="$PWD/test/real-trees"

fetch_trees() {
  local url=$1
  local name=$2
  local ref=$3

  local trees_dir="${TREES_DIR}/${name}"

  printf 'Updating %s...\n' "$name"

  if [[ ! -d "$trees_dir" ]]; then
    git clone "$url" "$trees_dir" --depth=1
  fi

  git -C "$trees_dir" fetch origin "$ref" --depth=1
  git -C "$trees_dir" reset --hard FETCH_HEAD
}

fetch_trees git@git.sr.ht:~jonsterling/public-trees     jms-trees      main
fetch_trees git@github.com:jetjinser/golden-forest.git  golden-forest  main
