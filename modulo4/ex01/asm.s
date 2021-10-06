.section .text

  .global cube

cube:
  #prologue
  pushl %ebp
  movl %esp, %ebp
  
	movl  8(%ebp),%eax  #retorno
	imull %eax, %eax     #contador
	imull 8(%ebp), %eax #contador

end:
  # Epilogue		
  movl %ebp, %esp # restore the previous stack pointer ("clear" the stack)
  popl %ebp    # restore the previous stack frame pointer
  ret
