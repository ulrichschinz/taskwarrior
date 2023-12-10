# taskwarrior

### Configuration

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


