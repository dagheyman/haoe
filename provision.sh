#! /usr/bin/env bash

sudo apt-get update -qq && apt-get upgrade -qq

sudo apt-get install -qq \
    vim
    gcc
    git

# Fix dotfiles
cd ~ 
git clone https://github.com/dagheyman/.dotfiles.git
.dotfiles/setup.sh
