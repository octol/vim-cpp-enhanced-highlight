" Vim syntax file
" Language: C Additions
" Maintainer: Jon Haggblad <jon@haeggblad.com>
" URL: http://www.haeggblad.com
" Last Change: 9 Aug 2014
" Version: 0.1
" Changelog:
"   0.1 - initial version.
"
" Syntax highlighting for functions in C.
"
" Based on:
"   http://stackoverflow.com/questions/736701/class-function-names-highlighting-in-vim

" -----------------------------------------------------------------------------
"  Highlight Class and Function names.
" -----------------------------------------------------------------------------
syn match    cCustomParen    "(" contains=cParen contains=cCppParen
syn match    cCustomFunc     "\w\+\s*(\@=" contains=cCustomParen
syn match    cCustomScope    "::"
syn match    cCustomClass    "\w\+\s*::" contains=cCustomScope

hi def link cCustomFunc  Function

