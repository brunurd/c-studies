#!/usr/bin/env bash

set -e

cd "build" || exit 1

cmake ..
make
CTEST_OUTPUT_ON_FAILURE=1 ctest

cd - || exit 0
