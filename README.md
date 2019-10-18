vim.cpp - additional vim c++ syntax highlighting
------------------------------------------------

This file contains additional syntax highlighting that I use for C++11/14/17
development in Vim. Compared to the standard syntax highlighting for C++ it
adds highlighting of (user defined) functions and the containers and types in
the standard library / boost.

Development is done at: http://github.com/octol/vim-cpp-enhanced-highlight

![Screenshot](http://www.haeggblad.com/vim/screenshot.png)

Optional features
-----------------

Highlighting of class scope is disabled by default. To enable set
```vim
let g:cpp_class_scope_highlight = 1
```

Highlighting of member variables is disabled by default. To enable set
```vim
let g:cpp_member_variable_highlight = 1
```

Highlighting of class names in declarations is disabled by default. To enable set
```vim
let g:cpp_class_decl_highlight = 1
```

Highlighting of POSIX functions is disabled by default. To enable set
```vim
let g:cpp_posix_standard = 1
```

There are two ways to highlight template functions. Either
```vim
let g:cpp_experimental_simple_template_highlight = 1
```
which works in most cases, but can be a little slow on large files.
Alternatively set
```vim
let g:cpp_experimental_template_highlight = 1
```
which is a faster implementation but has some corner cases where it doesn't
work.

_Note: C++ template syntax is notoriously difficult to parse, so don't expect
this feature to be perfect._

Highlighting of library concepts is enabled by
```vim
let g:cpp_concepts_highlight = 1
```
This will highlight the keywords `concept` and `requires` as well as all named
requirements (like `DefaultConstructible`) in the standard library.

Highlighting of user defined functions can be disabled by
```vim
let g:cpp_no_function_highlight = 1
```

Installation instructions
-------------------------
Follow one of the sets of directions below and reload vim afterwards.

#### Vundle
Install using [vundle](https://github.com/gmarik/Vundle.vim) by adding
```vim
Plugin 'octol/vim-cpp-enhanced-highlight'
```
to .vimrc and run `:PluginInstall`.


#### Git submodule + Pathogen
If you have [pathogen](https://github.com/tpope/vim-pathogen) installed,
and you prefer to use git submodules, run
```sh
cd ~/.vim
git submodule add https://github.com/octol/vim-cpp-enhanced-highlight.git bundle/syntax/
```

#### Manual installation
If you don't have either Vundle or Pathogen installed, copy the cpp.vim file
(optionally also c.vim) to .vim/after/syntax.
```sh
git clone https://github.com/octol/vim-cpp-enhanced-highlight.git /tmp/vim-cpp-enhanced-highlight
mkdir -p ~/.vim/after/syntax/
mv /tmp/vim-cpp-enhanced-highlight/after/syntax/cpp.vim ~/.vim/after/syntax/cpp.vim
rm -rf /tmp/vim-cpp-enhanced-highlight
```

Issues
------

Vim tend to a have issues with flagging braces as errors, see for example
https://github.com/vim-jp/vim-cpp/issues/16. A workaround is to set
```vim
let c_no_curly_error=1
```

Background information
----------------------

- http://stackoverflow.com/questions/736701/class-function-names-highlighting-in-vim
- http://www.vim.org/scripts/script.php?script_id=4293
- http://www.vim.org/scripts/script.php?script_id=2224
- http://www.vim.org/scripts/script.php?script_id=1640
- http://www.vim.org/scripts/script.php?script_id=3064

Jon Haggblad <jon@haeggblad.com>

Last update: 19 October 2016
