 .global activate_2bits
 .global activate_bit

activate_2bits:
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
	movl $1, %edx

activate:		
	pushl %edx
	pushl %ecx
	pushl %ebx
	
	call activate_bit
	
	popl %ebx
	popl %ecx
	popl %edx
	
	cmpl $2, %edx
	je end

	movl $31, %eax
	subl %ecx, %eax
	movl %eax, %ecx
	incl %edx
	jmp activate
	
end:
  # Restore Regsiters
	######################################################
	popl %ebx
	######################################################
  # Epilogue		
  movl %ebp, %esp # restore the previous stack pointer ("clear" the stack)
  popl %ebp    # restore the previous stack frame pointer
  ret
