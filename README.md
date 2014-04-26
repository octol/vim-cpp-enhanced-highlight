vim.cpp - additional vim c++ syntax highlighting
------------------------------------------

This file contains additional syntax highlighting that I use for my C++11/14
development in Vim. Compared to the standard syntax highlighting for C++ it
adds highlighting of (user defined) functions and the containers and types 
in the standard library / boost.

Development is done at: http://github.com/octol/vim-cpp-enhanced-highlight

Installation instructions
-----------
Follow one of the sets of directions below and reload vim afterwards.

#### Via git + copy and paste
If you don't have either Vundle or Pathogen installed, you may copy and
paste the cpp.vim file into your .vim/after/syntax folder. The following
shell commands will help you do so.
```sh
cd ~/.vim
git clone https://github.com/octol/vim-cpp-enhanced-highlight.git
mkdir -p after/syntax/
mv vim-cpp-enhanced-highlight/after/syntax/cpp.vim after/syntax/cpp.vim
rm -rf vim-cpp-enhanced-highlight
```

#### Via Vundle
If you have [vundle](https://github.com/gmarik/Vundle.vim) installed, you
can install the plugin by adding 
```vim
Bundle 'octol/vim-cpp-enhanced-highlight'
```
to your .vimrc and running `:BundleInstall` from vim.


#### Via git submodule + Pathogen
If you have [pathogen](https://github.com/tpope/vim-pathogen) installed,
and you prefer to use git submodules, the following bash commands will help
you do so.
```sh
cd ~/.vim
git submodule add https://github.com/octol/vim-cpp-enhanced-highlight.git bundle/syntax/
```

Background information
---------

- http://stackoverflow.com/questions/736701/class-function-names-highlighting-in-vim
- http://www.vim.org/scripts/script.php?script_id=4293
- http://www.vim.org/scripts/script.php?script_id=2224
- http://www.vim.org/scripts/script.php?script_id=1640
- http://www.vim.org/scripts/script.php?script_id=3064

Jon Haggblad <jon@haeggblad.com>

Last update: 25 April 2014
