vim.cpp - additional vim c++ syntax highlighting
------------------------------------------------

This file contains additional syntax highlighting that I use for C++11/14
development in Vim. Compared to the standard syntax highlighting for C++ it
adds highlighting of (user defined) functions and the containers and types in
the standard library / boost.

Development is done at: http://github.com/octol/vim-cpp-enhanced-highlight

![Screenshot](http://www.haeggblad.com/vim/screenshot.png)

Optional features
-----------------

Highlighting of class scope if disabled by default. To enable set
```vim
let g:cpp_class_scope_highlight = 1
```

Highlighting of template functions is enabled by setting
```vim
let g:cpp_experimental_template_highlight = 1
```
_Note: C++ template syntax is notoriously difficult to parse, so don't expect
this feature to be perfect._

Installation instructions
-------------------------
Follow one of the sets of directions below and reload vim afterwards.

#### Vundle
If you have [vundle](https://github.com/gmarik/Vundle.vim) installed, 
add 
```vim
Plugin 'octol/vim-cpp-enhanced-highlight'
```
to .vimrc and run `:PluginInstall` from vim.


#### Git submodule + Pathogen
If you have [pathogen](https://github.com/tpope/vim-pathogen) installed,
and you prefer to use git submodules, the following bash commands will help
you do so.
```sh
cd ~/.vim
git submodule add https://github.com/octol/vim-cpp-enhanced-highlight.git bundle/syntax/
```

#### Manual installation
If you don't have either Vundle or Pathogen installed, copy the cpp.vim file
(optionally also c.vim) to .vim/after/syntax.
```sh
git clone https://github.com/octol/vim-cpp-enhanced-highlight.git /tmp
mkdir -p ~/.vim/after/syntax/
mv /tmp/vim-cpp-enhanced-highlight/after/syntax/cpp.vim after/syntax/cpp.vim
rm -rf /tmp/vim-cpp-enhanced-highlight
```

Background information
----------------------

- http://stackoverflow.com/questions/736701/class-function-names-highlighting-in-vim
- http://www.vim.org/scripts/script.php?script_id=4293
- http://www.vim.org/scripts/script.php?script_id=2224
- http://www.vim.org/scripts/script.php?script_id=1640
- http://www.vim.org/scripts/script.php?script_id=3064

Jon Haggblad <jon@haeggblad.com>

Last update: 21 September 2014
