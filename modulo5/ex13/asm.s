.section .text
  .global count_odd_matrix


count_odd_matrix:
# prologue
  pushl %ebp
  movl %esp, %ebp


  pushl %ebx
  pushl %esi
  pushl %edi

  movl 8(%ebp), %edx #pointer da matriz
  movl 12(%ebp), %ecx #linhas
  movl 16(%ebp), %edi #colunas
  movl $0, %eax #numero de odd numbers

#loop das linhas
loop_linhas:
  cmpl $0, %ecx # até não existirem mais linhas a iterar
  je end
  movl (%edx), %ebx #retem o endereço a linha em que se encontra
  jmp loop_colunas

#loop das colunas
loop_colunas:
  cmpl $0, %edi # até não existirem mais colunas a iterar na linha atual
  je fim_coluna # proxima linha

  movl (%ebx), %esi # endereço da coluna em que se encontra
  andl $1, %esi #bit menos significativo do numero
  cmpl $1, %esi # se for 1 é impar
  je odd

  decl %edi # decrementa o numero de colunas da linha
  addl $4, %ebx # proxima coluna
  jmp loop_colunas

fim_coluna:
  movl 16(%ebp), %edi #repoe os valor das colunas
  addl $4, %edx # proxima linha a verificar
  decl %ecx # decrementa o numero de linhas
  jmp loop_linhas


odd:
  incl %eax
  decl %edi
  addl $4, %ebx
  jmp loop_colunas


end:

  popl %edi
  popl %esi
  popl %ebx

  # epilogue
  movl %ebp, %esp
  popl %ebp
  ret
