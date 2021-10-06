.section .text

  .global sum_n

sum_n:
  #prologue
  pushl %ebp
  movl %esp, %ebp
  
	movl  8(%ebp), %eax  #retorno
	movl  8(%ebp), %ecx  #contador
	movl  $1, %edx
	
	cmpl $0,%ecx
	jle restart


loop:
	cmpl %edx, %ecx
	je end
	addl %edx, %eax
	incl %edx
	jmp loop

restart:
	movl $0, %eax

end:
  # Epilogue		
  movl %ebp, %esp # restore the previous stack pointer ("clear" the stack)
  popl %ebp    # restore the previous stack frame pointer
  ret
