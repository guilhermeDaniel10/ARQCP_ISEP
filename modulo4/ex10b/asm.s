 .global count_bits_zero

count_bits_zero:
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
	movl 8(%ebp), %ebx #numero x em ebx
	movb $31, %cl	   #decremento em cl
	movl $0, %eax      #contador em eax

loop:
		
		movl %ebx, %edx #numero x em edx 
		sar %cl, %edx   #incremento 31x para a direita

		andl $1, %edx   #operacao logica 

		cmpl $0, %edx
		jne not_zero
		incl %eax
		not_zero: 
			decb %cl
			cmpb $-1, %cl
			jne loop

end:
  # Restore Regsiters
	######################################################
	popl %ebx
	######################################################
  # Epilogue		
  movl %ebp, %esp # restore the previous stack pointer ("clear" the stack)
  popl %ebp    # restore the previous stack frame pointer
  ret
