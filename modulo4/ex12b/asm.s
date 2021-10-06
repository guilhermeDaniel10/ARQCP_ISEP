 .global activate_bit

activate_bit:
  #prologue
  pushl %ebp
  movl %esp, %ebp
  # Save Registers
	#####################################################
	pushl %ebx
	######################################################
  
	######################################################
	# Parametros
	######################################################
	movl 8(%ebp), %ebx  #pointer para o numero
	movl 12(%ebp), %ecx #posicao do bit a ser alterado	
	movl $1, %eax       #mascara
	
	SHL %cl,%eax
	movl %eax, %edx	    #copia mascara
	
	andl (%ebx), %eax

	cmp $0, %eax
	je change
	
	movl $0, %eax
	jmp end

change:	
	orl %edx, (%ebx)
	movl $1, %eax

end:
  # Restore Regsiters
	######################################################
	popl %ebx
	######################################################
  # Epilogue		
  movl %ebp, %esp # restore the previous stack pointer ("clear" the stack)
  popl %ebp    # restore the previous stack frame pointer
  ret
