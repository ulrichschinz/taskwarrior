#!/bin/sh

current_date=$(date +%Y%m%d)
fname='taskwarrior-secrets-and-data'
file_pattern='taskwarrior-secrets-and-data.*'

for file in $(find . -type f -name "$file_pattern"); do
  # Check if the file matches the current date
  if [[ $file != *".$current_date.tgz.gpg" ]] && [[ $file != *".$current_date.tgz" ]]; then
    rm -rf "$file"
    echo "Deleted file: $file"
  fi
done
if [ ! -e $fname.$current_date.tgz ]; then
  tar czfv $fname.$current_date.tgz hooks *.sqlite3
fi

if [ ! -e $fname.$current_date.tgz.gpg ]; then
  gpg -a -r D49BFC90C3276F020FAE37C2EC5B4158D892A9CD -o $fname.$current_date.tgz.gpg -e $fname.$current_date.tgz 
fi
