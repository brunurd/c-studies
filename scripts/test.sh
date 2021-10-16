#!/usr/bin/env bash

cd "build" || exit 1

cmake ..
make
CTEST_OUTPUT_ON_FAILURE=1 ctest

cd - || exit 0
