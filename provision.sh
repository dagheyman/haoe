#! /usr/bin/env bash

sudo apt-get update -qq && apt-get upgrade -qq

# Install development dependencies
# for both Python 2 and Python 3
sudo apt-get install -qq \
    vim
    gcc

