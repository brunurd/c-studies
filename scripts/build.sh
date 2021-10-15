#!/usr/bin/env bash

cd "build" || exit 1

cmake ..
make

cd - || exit 0
