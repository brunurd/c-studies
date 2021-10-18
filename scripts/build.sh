#!/usr/bin/env bash

set -e

cd "build" || exit 1

cmake ..
make

cd - || exit 0
