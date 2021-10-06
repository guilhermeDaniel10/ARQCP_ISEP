.global changes

changes:
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
	movl 8(%ebp), %edx  #pointer para o numero	
	movl $20, %ecx      #posicoes a incrementar e decrementar
	movl $15, %eax      #mascara
	sall %cl, %eax
	movl (%edx), %ebx   #numero
	
	andl %eax, %ebx
	
	shrl %cl, %ebx
	
	cmp $7, %ebx
	jle end
	
	xor %eax, (%edx)

end:
  # Restore Regsiters
	######################################################
	popl %ebx
	######################################################
  # Epilogue		
  movl %ebp, %esp # restore the previous stack pointer ("clear" the stack)
  popl %ebp    # restore the previous stack frame pointer
  ret
