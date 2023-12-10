# Ulis Config For Taskwarrior

**WARNING THIS IS ONLY A CONFIG FOR MY OWN FUN, MIGHT NOT WORK FOR YOU AT ALL**  

This config is actively used by me. There is an encrypted file in this repository, which contains my personal settings for my taskd server at home.  
Reach out, if you are really interested on these settings, or have a look at (https://taskwarrior.org/docs/)[Taskworrior docs].  

## Install

Since taskwarrior keeps the current context in ~/.taskrc it makes the git-management unhandy and I wanted to avoid that.  
For that reason the configfile has been split.  
Main taskrc will not be included in this repository, since the real configuration is contained in `taskrc.inc`.  
To get it working just create a file called `taskrc` in this repository, which contains the line:  

```config
include taskrc.inc
```

Then link that file to your homedirectory. Given your configuration is in path `~/.dotfiles/taskwarrior`:  
```bash
ln -s ~/.dotfiles/taskwarrior/taskrc ~/.taskrc
```

Also link this repo to `~/.task`  

```bash
ln -s ~/.dotfiles/taskwarrior ~/.task
```

### Restore backup

Unencrypt and unpack the secret configs:  

```bash
gpg -d taskwarrior-secrets-and-data.*.gpg
tar xf taskwarrior-secrets-and-data.*.tgz
```

**Now you're ready to go**  
Now you can just run your task commands as usual:  
```bash
uli@machine|~/projects/sit/schinzde/webtw-main
) task

ID Age   Project        Tag  Recur Due    Until  Estimate Description                                                                                                                          Urg
 1  7mo  Babashka       HOME        -7w                 0 Dokumentation durchlesen                                                                                                             15.8
                                                            2023-05-14 https://practical.li/blog/posts/create-deps-new-template-for-clojure-cli-projects/ and https://github.com/babashka/neil
<.... snip .....>
151 tasks, truncated to 51 lines
Context 'home' set. Use 'task context none' to remove.
There are 13 local changes.  Sync required.
```

#### Backup and Cleanup script

As I'd like to keep my tasks data, keys and secrets, I created a little script to backup that data and encrypt it: `back_and_cleanup.sh`.  
This way I can just keep it in my repository (you may warn me to do so, but relax, I already did ;) ).  

### Config example

Here is the configuration file content that was delivered with my default installation:

```config
# [Created by task 2.5.3 4/2/2021 16:13:50]
# Taskwarrior program configuration file.
# For more documentation, see http://taskwarrior.org or try 'man task', 'man task-color',
# 'man task-sync' or 'man taskrc'

# Here is an example of entries that use the default, override and blank values
#   variable=foo   -- By specifying a value, this overrides the default
#   variable=      -- By specifying no value, this means no default
#   #variable=foo  -- By commenting out the line, or deleting it, this uses the default

# Use the command 'task show' to see all defaults and overrides

# Files

# Color theme (uncomment one to use)
#include /usr/share/doc/task/rc/light-16.theme
#include /usr/share/doc/task/rc/light-256.theme
#include /usr/share/doc/task/rc/dark-16.theme
#include /usr/share/doc/task/rc/dark-256.theme
#include /usr/share/doc/task/rc/dark-red-256.theme
#include /usr/share/doc/task/rc/dark-green-256.theme
#include /usr/share/doc/task/rc/dark-blue-256.theme
#include /usr/share/doc/task/rc/dark-violets-256.theme
#include /usr/share/doc/task/rc/dark-yellow-green.theme
#include /usr/share/doc/task/rc/dark-gray-256.theme
#include /usr/share/doc/task/rc/dark-gray-blue-256.theme
#include /usr/share/doc/task/rc/solarized-dark-256.theme
#include /usr/share/doc/task/rc/solarized-light-256.theme
#include /usr/share/doc/task/rc/no-color.theme

include taskrc.inc
```


