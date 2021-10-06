.section .data
   .global ptr1

 .section .text
    .global encrypt

  encrypt:

    #prologue
    pushl %ebp
	  movl %esp, %ebp

    movl $0, %eax
    movl $0, %edx
    movl ptr1, %edx

  my_loop:
    movb (%edx), %cl
    cmp $0, %cl # fim da string
    je end # salta para o fim

    cmp $32, %cl
    je a_or_space

    cmp $10, %cl
    je a_or_space

    cmp $97, %cl
    je a_or_space

    addb $2, (%edx)
    incl %eax

  a_or_space:
    incl %edx
    jmp my_loop

  end:
  # epilogue
  movl %ebp, %esp
  popl %ebp

  ret
