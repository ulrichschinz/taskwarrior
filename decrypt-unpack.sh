#!/bin/bash

# Names and dates
FILENAMEBASE=taskwarrior-secrets-and-data
FILENAMEDATE=$(echo *.gpg | grep -oE '[0-9]{8}')

# decrypt and unpack
gpg -d *.gpg > ${FILENAMEBASE}.${FILENAMEDATE}.tgz
tar xf ${FILENAMEBASE}.${FILENAMEDATE}.tgz

# Reset variables
FILENAMEBASE=
FILENAMEDATE=
