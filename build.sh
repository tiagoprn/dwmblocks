#!/bin/bash
DESTDIR=~/local PREFIX='' make install
pkill dwmblocks
echo 'Finished. Open a terminal so that the bar can be updated.'
