set tabstop=4
set softtabstop=4
set shiftwidth=4
set noexpandtab

set colorcolumn=80
highlight ColorColumn ctermbg=darkgrey

syntax on

set number

"File detection for c type as well, subtype is doxygen for highlighting
"augroup project
	"autocmd!
	"autocmd BufRead,BufNewFile *.h,*.c set filetype=c.doxygen
"augroup END

"add search path for include files
"let &path.="src/include,/usr/include/AL,"

nnoremap <F5> :!./my_great_program<cr>
