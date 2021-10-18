#!/usr/bin/env bash

set -e

cd "build" || exit 1

cmake -DCMAKE_BUILD_TYPE=Debug ..
make

cd - || exit 1

gdb --batch -iex 'set pagination off'
gdb ./bin/c_studies_app
