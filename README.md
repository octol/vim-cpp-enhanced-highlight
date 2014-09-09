vim.cpp - additional vim c++ syntax highlighting
------------------------------------------------

This file contains additional syntax highlighting that I use for my C++11/14
development in Vim. Compared to the standard syntax highlighting for C++ it
adds highlighting of (user defined) functions and the containers and types 
in the standard library / boost.

Development is done at: http://github.com/octol/vim-cpp-enhanced-highlight

Optional features
-----------------

Highlighting of template functions is enabled by setting

```vim
let g:cpp_experimental_template_highlight = 1
```

_Note: this does not yet work for nested template arguments._

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

Last update: 6 September 2014
