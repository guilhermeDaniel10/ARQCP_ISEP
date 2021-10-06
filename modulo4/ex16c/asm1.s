.global changes
.global changes_vec;

changes_vec:
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
	movl 8(%ebp), %edx  #pointer para o vec	
	movl 12(%ebp),%ecx  #num de posicoes	
	movl $0, %eax       #incremento de posicoes
	
loop:
	cmp %eax, %ecx
	je end
	
	pushl %ecx
	pushl %eax
	pushl %edx
	
	call changes
	
	popl %edx
	popl %eax
	popl %ecx
	
	addl $4, %edx
	incl %eax
	jmp loop

end:
  # Restore Regsiters
	######################################################
	popl %ebx
	######################################################
  # Epilogue		
  movl %ebp, %esp # restore the previous stack pointer ("clear" the stack)
  popl %ebp    # restore the previous stack frame pointer
  ret
